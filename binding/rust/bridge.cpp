#include "bridge.h"
using namespace std; 

extern "C"
{
    RustBuffer rust_hash(const uint8_t *input, size_t len); 
    void rust_buffer_free(RustBuffer *buf); 
}

namespace aic :: security
{
    uint32_t version()
    {
        return aic_security_version(); 
    }

    vector<uint8_t> hash(const vector<uint8_t> &input)
    {
        RustBuffer buf = rust_bash(input.data(), input.size()); 
        vector<uint8_t> result(buf.data, buf.data + buf.len); 

        rust_buffer_free(buf); 
        return result; 
    }
}