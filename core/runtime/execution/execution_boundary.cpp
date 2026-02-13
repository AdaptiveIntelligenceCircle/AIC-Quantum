#include "execution_boundary.h"
using namespace std; 

namespace aic 
{
    ExecutionBoundary :: ExecutionBoundary(
        size_t max_steps, 
        Timestamp max_duration 
    )
    : max_steps_(max_steps), current_steps_(0), 
    max_duration_(max_duration), start_time_(0){}

    void ExecutionBoundary :: reset()
    {
        current_steps_ = 0; 
        start_time_ = 0; 
    }

    ErrorCode ExecutionBoundary ::check_step()
    {
        current_steps_++; 
        if (current_steps_ > max_steps_)
        return ErrorCode :: RUNTIME_LIMIT; 

        return ErrorCode :: OK; 
    }

    ErrorCode ExecutionBoundary :: check_time(
        Timestamp current_time 
    )
    {
        if (start_time_ == 0)
        start_time_ = current_time; 

        if ((current_time - start_time_) > max_duration_)
        return ErrorCode :: RUNTIME_LIMIT; 

        return ErrorCode :: OK; 
    }
}