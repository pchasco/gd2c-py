from __future__ import annotations
from typing import TYPE_CHECKING, Union
from gd2c.address import *
from gd2c.controlflow import AbstractVariable

if TYPE_CHECKING:
    from gd2c.targets.gdnative import FunctionContext

class GDNativeLocalVariable(AbstractVariable):
    def __init__(self, func_context: FunctionContext, address: Union[int, GDScriptAddress]):
        self._func_context = func_context
        if isinstance(address, GDScriptAddress):
            self.address = address
        else:
            self.address = GDScriptAddress(address)

    def value(self, ) -> str:
        if self.address.mode in (ADDRESS_MODE_STACK, ADDRESS_MODE_STACKVARIABLE):
            len_parameters = self._func_context.func.len_parameters
            if self.address.offset < len_parameters:
                return f"(*p_args[{self.address.offset}])"
            else:
                return f"stack[{self.address.offset - len_parameters}]"
        elif self.address.mode == ADDRESS_MODE_LOCALCONSTANT:
            return f"{self._func_context.constants_array_identifier}[{self.address.offset}]"
        elif self.address.mode == ADDRESS_MODE_PARAMETER:
            return f"(*{self._func_context.parameters_identifier}[{self.address.offset}])"

        return str(self.address)

    def address_of(self) -> str:
        if self.address.mode in (ADDRESS_MODE_STACK, ADDRESS_MODE_STACKVARIABLE):
            len_parameters = self._func_context.func.len_parameters
            if self.address.offset < len_parameters:
                return f"p_args[{self.address.offset}]"
            else:
                return f"&stack[{self.address.offset - len_parameters}]"
        elif self.address.mode == ADDRESS_MODE_LOCALCONSTANT:
            return f"&{self._func_context.constants_array_identifier}[{self.address.offset}]"
        elif self.address.mode == ADDRESS_MODE_PARAMETER:
            return f"{self._func_context.parameters_identifier}[{self.address.offset}]"

        return str(self.address)