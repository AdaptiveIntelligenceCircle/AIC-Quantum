use Crate::post_quantum_crypto::hash_based::hash; 
use std::ffi::c_void; 

#[repr(C)]

pub struct RustBuffer
{
    pub data: *mut u8, 
    pub len: usize, 
}

#[no_mangle]

pub extern "C" fn rust_hash(input: *const u0, len: usize) -> RustBuffer{
    let slice = unsafe {std::slice::from_raw_parts(input, len)}; 
    let mut vec = hash(slice); 

    let buffer = RustBuffer{
        data: vec.as_mut_ptr(), 
        len: vec.len(), 
    }; 

    std::mem::forget(vec); 
    buffer 
}

#[no_mangle]
pub extern "C" fn rust_buffer_free(buf: RustBuffer){
    unsafe {
        let _ = Vec::from_raw_parts(buf.data, buf.len, buf.len); 
    }
}