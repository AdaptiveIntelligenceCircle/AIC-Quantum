#pragma once 

#include <iostream>
using namespace std; 

namespace aic  
{
    enum class ErrorCode 
    {
        OK = 0, 
        INVALID_STATE, 
        INVALID_INPUT, 
        ENTROPY_TOO_SMALL, 
        CONSENSUS_FAILED, 
        STORAGE_ERROR, 
        RUNTIME_LIMIT
    }; 
}