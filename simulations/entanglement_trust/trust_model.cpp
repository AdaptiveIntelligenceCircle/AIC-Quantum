#include "trust_model.h"

using namespace std; 

namespace aic
{
    void TrustModel :: add_node(int id, double initial_trust)
    {
        nodes[id].id = id; 
        //nodes[id] = {id, initial_trust};
    }

    void TrustModel :: entangle(int a, int b, double weight)
    {
        edges[a].push_back({b, weight}); 
        edges[b].push_back({a, weight}); 
    }

    void TrustModel :: update_trust(int id, double delta)
    {
        nodes[id].trust_score += delta; 
    }

    double TrustModel :: get_trust(int id) const 
    {
        return nodes.at(id).trust_score; 
    }
}