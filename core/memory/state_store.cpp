#include "state_store.h"
using namespace std; 

namespace aic 
{
    ErrorCode StateStore :: save(StateId id, size_t value)
    {
        store_[id] = value; 
        return ErrorCode :: OK; 
    }

    ErrorCode StateStore :: load(StateId id, size_t &value) const 
    {
        auto it = store_.find(id); 
        if (it == store_.end())
        return ErrorCode :: INVALID_STATE; 

        value = it -> second; 
        return ErrorCode :: OK;
    }
}