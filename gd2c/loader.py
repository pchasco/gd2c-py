from __future__ import annotations
from pathlib import Path
from gd2c.gdscriptclass import GDScriptClass, GDScriptClassConstant, GDScriptFunctionConstant, GDScriptFunction, GDScriptGlobal, GDScriptMember, GDScriptFunctionParameter
from gd2c.variant import VariantType
from typing import List, Iterable, TYPE_CHECKING
import json

if TYPE_CHECKING:
    from gd2c.project import Project

class JsonGDScriptLoader:
    def __init__(self, project: Project):
        self._project = project

    def load_classes(self, path: Path) -> Iterable[GDScriptClass]:
        with path.open() as f:
            data = json.load(f)
            yield self._build_class(path, data)

    def _build_class(self, path: Path, data) -> GDScriptClass:
        cls = GDScriptClass(
            self._project.to_resource_path(str(path)), 
            data.get("name", None) or self._project.generate_unique_class_name(), 
            self._project.generate_unique_class_type_id())
        cls.base_resource_path = data["base_type"]
        cls.built_in_type = data["type"]
        
        for index, entry in enumerate(data["global_constants"]):
            glob = GDScriptGlobal(index, data["name"], data["original_name"], data["type_code"], data["kind_code"], data["value"], data["source"])
            cls.add_global(glob)

        for signal in data["signals"]:
            cls.add_signal(signal)

        for index, entry in enumerate(data["members"]):
            member = GDScriptMember(entry["name"], int(index))
            cls.add_member(member)

        for index, entry in enumerate(data["constants"]):
            const = GDScriptClassConstant(entry["name"], int(entry["type"]), bytes(list(entry["data"])), entry["declaration"])
            cls.add_constant(const)

        for index, entry in enumerate(data["methods"]):
            func = GDScriptFunction(entry["name"], GDScriptFunction.TYPE_METHOD)
            func.stack_size = int(entry["stack_size"])
            func.default_arguments_jump_table = list(map(lambda x: int(x), entry["default_arguments"]))
            func.return_vtype = VariantType.get(int(entry["return_type"]["type"]))

            for pindex, pentry in enumerate(entry["parameters"]):
                param = GDScriptFunctionParameter(
                    pentry["name"], 
                    VariantType.get(pentry["type"]), 
                    pindex)
                func.add_parameter(param)

            for cindex, centry in enumerate(entry["constants"]):
                const = GDScriptFunctionConstant(
                    cindex,
                    centry["type"], 
                    bytes(list(map(lambda x: int(x), centry["data"]))), 
                    centry["declaration"])
                func.add_constant(const)                    

        return cls