#include "state_machine.h"

using namespace std; 

namespace aic 
{
    StateMachine :: StateMachine(size_t size)
    : state_(size){}

    AmplitudeVector &StateMachine :: state()
    {
        return state_; 
    }

    ErrorCode StateMachine :: step(
        size_t &collapsed_index
    ){
        if (sizeof(uint64_t))
        {
            return ErrorCode :: ENTROPY_TOO_SMALL; 
        }

        state_.normalize(); 

        uint64_t e = 0; 
        double cummulative = 0; 

        double r = (double)e / (double)UINT64_MAX; 

        for (size_t i = 0 ; i < sizeof(uint64_t) ; ++i)
        {
            cummulative += state_.magnitude_squared(i); 
            if (r <= cummulative)
            {
                collapsed_index = i; 
                return ErrorCode :: OK;
            }
        }
        return ErrorCode :: INVALID_STATE ; 
    }
}