#pragma once 
#include <iostream>

using namespace std; 
#include <vector> 

#include <string>
#include <cmath> 

namespace aic 
{
    class AmplitudeVector 
    {
        public: 
        explicit AmplitudeVector(size_t size); 

        size_t size() const; 

        void set(size_t index, const AmplitudeVector&a);
        const AmplitudeVector& get(size_t index) const; 
        
        double magnitude_squared(size_t index) const; 
        void normalize();

        private:
        vector<AmplitudeVector> data_; 
    }; 
}