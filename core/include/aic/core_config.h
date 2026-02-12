#pragma once 

#include <cstddef> 
#include <string> 

using namespace std; 

namespace aic 
{
    struct CoreConfig 
    {
        size_t max_states = 16; 
        size_t max_nodes = 128; 
        size_t noise_factor = 0.0; 
    }; 
}
