#pragma once 
#include <iostream>

#include <string> 
using namespace std; 

#include "../include/aic/types.h"
#include "../include/aic/errror_code.h"

#include <unordered_map>

namespace aic 
{
    class StateStore 
    {
        public:
        ErrorCode save(StateId id, size_t value); 
        ErrorCode load(StateId id, size_t &value) const; 

        private: 
        unordered_map<StateId, size_t> store_; 
    }; 
}