#pragma once 

#include "../include/aic/types.h"
#include "../include/aic/errror_code.h"

using namespace std; 

namespace aic 
{
    class CollapseModel 
    {
        public: 
        ErrorCode collapse(
            const vector<double>& weighted_probabilities, 
            const EntropyBuffer &entropy, 
            size_t &result 
        ) const ; 
        
    }; 
}