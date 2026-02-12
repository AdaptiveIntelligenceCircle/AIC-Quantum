#pragma once 
#include "../include/aic/errror_code.h"

#include "amplitude_vector.h"
using namespace std; 

namespace aic 
{
    class StateMachine 
    {
        public: 
        explicit StateMachine(size_t size); 

        ErrorCode step( size_t &collapsed_index); 

        AmplitudeVector &state(); 

        private:
        AmplitudeVector state_; 
    }; 
}