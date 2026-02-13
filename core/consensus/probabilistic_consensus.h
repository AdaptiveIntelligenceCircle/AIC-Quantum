#pragma once 
#include <iostream>
#include <string> 

#include "voting_strategy.h"
#include "collapse_model.h"

using namespace std; 

namespace aic 
{
    class ProbabilisticConsensus 
    {
        public: 
        
        explicit ProbabilisticConsensus(
            const VotingStrategy &strategy
        ); 

        ErrorCode decide (
            const vector<double> &base_probabilities, 
            const vector<NodeId> &nodes, 
            const EntropyBuffer &entropy, 
            size_t &decision
        )const;
        
        private: 

        const VotingStrategy &strategy_; 
        CollapseModel collapse_; 
    }; 
}