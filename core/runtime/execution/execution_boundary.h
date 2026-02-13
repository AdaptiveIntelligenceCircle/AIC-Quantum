#pragma once 

#include "../include/aic/types.h"
#include "../include/aic/errror_code.h"

using namespace std; 

namespace aic 
{
    class ExecutionBoundary 
    {
        public: 
        ExecutionBoundary(
            size_t max_steps, 
            Timestamp max_duration 
        ); 

        ErrorCode check_step(); 
        ErrorCode check_time(Timestamp current_time); 

        void reset(); 
        
        private: 
        size_t max_steps_; 
        size_t current_steps_; 
        Timestamp max_duration_; 
        Timestamp start_time_; 
    };  
}