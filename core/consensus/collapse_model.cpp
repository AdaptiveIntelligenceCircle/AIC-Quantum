#include "collapse_model.h"
#include <cstdint>

using namespace std; 

namespace aic 
{
    ErrorCode CollapseModel :: collapse(
        const vector<double> & weighted_probabilities, 
        const EntropyBuffer &entropy, 
        size_t &result 
    ) const 
    {
        if (entropy.size() < sizeof(uint64_t))
        return ErrorCode :: ENTROPY_TOO_SMALL; 

        uint64_t e = 0; 
        for (size_t i = 0 ; i < sizeof(uint64_t) ; ++i)
        e = (e << 8) | entropy[i]; 

        double r = (double)e/ (double) UINT64_MAX; 

        double cummulative = 0.0; 

        for (size_t i = 0 ; i < weighted_probabilities.size(); i++)
        {
            cummulative += weighted_probabilities[i]; 
            if (r <= cummulative)
            {
                result = i; 
                return ErrorCode :: OK; 
            }
        }
        return ErrorCode :: CONSENSUS_FAILED; 
    }
}