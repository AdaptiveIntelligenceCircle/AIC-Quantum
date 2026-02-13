#pragma once 

#include <iostream>
#include "../include/aic/types.h"

using namespace std; 

namespace aic 
{
    class TimeUtils 
    {
        public: 
        static Timestamp logical_next(Timestamp current);  
    }; 
}