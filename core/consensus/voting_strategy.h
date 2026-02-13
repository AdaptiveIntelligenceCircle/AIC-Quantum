#pragma once 
#include "../include/aic/types.h"

#include <vector> 
using namespace std; 

namespace aic 
{
    class VotingStrategy 
    {
        public: 
        virtual ~VotingStrategy() = default; 
        
        virtual double weight_vote(
            NodeId node, 
            double base_probability
        ) const = 0; 
    }; 
}