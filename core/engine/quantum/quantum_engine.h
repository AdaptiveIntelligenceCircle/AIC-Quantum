#pragma once 
#include <iostream>

#include <string> 
using namespace std; 

#include "../state/state_machine.h"
#include "../noise/noise_model.h"

namespace aic 
{
    class QuantumEngine 
    {
        public: 
        QuantumEngine (size_t state_size, double noise); 
        ErrorCode execute(const ErrorCode &entropy, size_t &result);

        private: 
        StateMachine machine_; 
        NoiseModel noise_; 
    }; 
}

