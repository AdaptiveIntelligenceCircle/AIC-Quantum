#pragma once 

#include "state_store.h"
using namespace std; 

namespace aic 
{
    class CheckPointManager 
    {
        public: 
        explicit CheckPointManager(StateStore &store); 

        ErrorCode checkpoint(StateId id, size_t value); 
        ErrorCode restore(StateId id, size_t &value); 

        private: 
        StateStore &store_; 
    };
}