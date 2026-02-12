#include "amplitude_vector.h"

using namespace std;

#include <string> 
#include <cmath> 

namespace aic 
{
    AmplitudeVector :: AmplitudeVector(size_t size)
    :data_(size){}

    size_t AmplitudeVector :: size() const 
    {
        return data_.size(); 
    }

    void AmplitudeVector ::set(size_t index, const AmplitudeVector &a)
    {
        data_[index] = a; 
    }

    const AmplitudeVector &AmplitudeVector :: get(size_t index) const 
    {
        return data_[index]; 
    }

    double AmplitudeVector :: magnitude_squared(size_t index) const 
    {
        const auto &a = data_[index]; 
        // return a.real * a.real + a.imag * a.imag;
    }

    void AmplitudeVector :: normalize()
    {
        double total  = 0.0;
        for (size_t i = 0; i < data_.size(); ++i){
            total += magnitude_squared(i); 
        }

        if (total <= 0.0) return; 

        double inv = 1.0 / sqrt(total); 

        for (auto &a : data_)
        {
            // a.real *= inv; 
            // a.imag *= inv; 
        }
    }
}
