from __future__ import annotations
from typing import Iterable

from gd2c.project import Project

class Target:
    def transform(self, project: Project) -> None:
        pass

    def emit(self, project: Project, output_path: str) -> None:
        print("Emit not implemented")