#include "noise_model.h"

using namespace std; 

namespace aic 
{
    NoiseModel :: NoiseModel(double factor)
    : factor_(factor){}

    void NoiseModel :: apply(AmplitudeVector &state) const 
    {
        if (factor_ == 0.0) return;
        
        for (size_t i = 0 ; i < state.size(); ++i)
        {
            auto a = state.get(i); 
            /*a.real *=(1.0 - factor_)*/
            /*a.imag *=(1.0 - factor_)*/
            
        }
    }
}