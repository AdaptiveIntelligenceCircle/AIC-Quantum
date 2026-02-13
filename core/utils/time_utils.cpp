#include "time_utils.h"
using namespace std; 

namespace aic 
{
    Timestamp TimeUtils :: logical_next(Timestamp current)
    {
        return current += 1;
    }
}