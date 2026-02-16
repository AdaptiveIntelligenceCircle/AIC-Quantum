import ctypes 
import os 
from ctypes import c_uint8, c_size_t , POINTER, Structure

# adjust this path according to your build.. 
LIB_PATH = os.getenv("AIC_SECURITY_LIB", "./libaic_security.so")

_lib = ctypes.CDLL(LIB_PATH)

class RustBuffer(Structure): 
    _fields_ = [
        ("data", POINTER(c_uint8)), 
        ("len", c_size_t),
    ]

# define signatures.. 
_lib.aic_security_version.restype = ctypes.c_uint32

_lib.rust_hash.argtypes = [POINTER(c_uint8), c_size_t]
_lib.rust_hash.restype = RustBuffer

_lib.rust_buffer_free.argtypes = [RustBuffer]
_lib.rust_buffer_free.restype = None 

def security_version() -> int:
    return _lib.aic_security_version()

def rust_bash(data: bytes) -> bytes: 
    buf = (c_uint8 *len(data))(*data)
    result = _lib.rust_hash(buf, len(data))

    #copy into Python bytes.. 
    output = bytes(result.data[i] for i in range(result.len))

    # Free Rust allocation.. 
    _lib.rust_buffer_free(result)

    return output 