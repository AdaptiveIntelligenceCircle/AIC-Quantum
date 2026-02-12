#pragma once 

#include "../amplitude/amplitude_vector.h"
using namespace std; 

namespace aic 
{
    class NoiseModel 
    {
        public: 
        explicit NoiseModel(double factor); 

        void apply(AmplitudeVector &state) const; 

        private: 
        double factor_; 
    }; 
}