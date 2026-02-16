from .py_interface import rust_hash, security_version
from .conversion_utils import ensure_bytes

class AICSecurity:
    @staticmethod
    def version() -> int: 
        return security_version()
    
    @staticmethod
    def hash(data:bytes) -> bytes: 
        data = ensure_bytes(data)
        return rust_hash(data)
    
    #example usage .. 
    if __name__ == "__main__":
       print("Security version:", AICSecurity.version())

    msg = b"hello quantum world"
    hashed = AICSecurity.hash(msg)

    print("Input:", msg)
    print("Hash:", hashed.hex())  
        
