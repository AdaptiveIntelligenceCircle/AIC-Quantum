#include "checkpoint_manager.h"
using namespace std; 

namespace aic 
{
    CheckPointManager :: CheckPointManager(StateStore &store)
    : store_(store){}

    ErrorCode CheckPointManager :: checkpoint(
        StateId id, 
        size_t value 
    )
    {
        return store_.save(id, value); 
    }

    ErrorCode CheckPointManager :: restore(
        StateId id, 
        size_t &value 
    )
    {
        return store_.load(id, value); 
    }
}