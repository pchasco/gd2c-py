from __future__ import annotations
from typing import Union
from gd2c.address import GDScriptAddress

class Variable:
    def __init__(self, address: Union[int, GDScriptAddress]):
        if isinstance(address, GDScriptAddress):
            self.address = address
        else:
            self.address = GDScriptAddress(address)

    def value(self) -> str:
        return str(self.address)

    def address_of(self) -> str:
        return '&' + str(self.address)
