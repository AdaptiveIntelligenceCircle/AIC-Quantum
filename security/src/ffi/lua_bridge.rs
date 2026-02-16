#[no_mangle]

pub extern "C" fn aic_lua_security_check(input: i32) -> i32{
    if input > 0{
        1
    }else{
        0 
    }
}