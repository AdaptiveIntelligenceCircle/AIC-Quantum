#include "probabilistic_consensus.h"
using namespace std; 

namespace aic 
{
    ProbabilisticConsensus :: ProbabilisticConsensus(
        const VotingStrategy &strategy
    )
    : strategy_(strategy){}

    ErrorCode ProbabilisticConsensus :: decide (
            const vector<double> &base_probabilities, 
            const vector<NodeId> &nodes, 
            const EntropyBuffer &entropy, 
            size_t &decision
    ) const 
    {
        if (base_probabilities.size() != nodes.size()){
            return ErrorCode :: INVALID_INPUT; 
        }

        vector<double> weighted; 
        weighted.reserve(nodes.size()); 

        double total = 0.0; 

        for (size_t i = 0 ; i <nodes.size() ; i++)
        {
            double w = strategy_.weight_vote(
                nodes[i], base_probabilities[i]
            ); 

            weighted.push_back(w); 
            total += w;
        }
        if (total <= 0.0)
        return ErrorCode :: CONSENSUS_FAILED; 

        for (auto &v : weighted)
        v/= total; 

        return collapse_.collapse(weighted, entropy, decision);
    }
}