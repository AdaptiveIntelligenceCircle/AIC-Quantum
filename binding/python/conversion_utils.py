from typing import Union

def ensure_bytes(data: Union[bytes, bytearray, memoryview]) -> bytes: 
    """
    Docstring for ensure_bytes
    
    :param data: Description
    :type data: Union[bytes, bytearray, memoryview]
    :return: Description
    :rtype: bytes
    """

    if isinstance(data, bytes):
        return data 
    if isinstance(data, (bytearray, memoryview)):
        return bytes(data)
    raise TypeError("Input must be bytes-like object")

def bytes_to_hex(data:bytes) -> str:
    return data.hex()

def hex_to_bytes(hex_str: str) -> bytes:
    return bytes.fromhex(hex_str)