#pragma once 
#include <iostream>

#include <cstdint>
#include <vector> 

using namespace std; 

namespace aic 
{
    using NodeId = uint64_t;
    using StateId = uint64_t; 
    using Timestamp = uint64_t; 

    struct Amplitude 
    {
        double real; 
        double imag;
    }; 

    using EntropyBuffer = vector<uint8_t>;
}