#pragma once 
#include <iostream>
using namespace std; 

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus 
extern "C"{
    #endif 

    typedef struct{
        uint8_t *data; 
        size_t len; 
    }RustBuffer; 

    uint32_t aic_security_version(); 

    RustBuffer rust_bash(const uint8_t *input, size_t len); 
    void rust_buffer_free(RustBuffer buf); 

    #ifdef __cplusplus 
}
#endif
