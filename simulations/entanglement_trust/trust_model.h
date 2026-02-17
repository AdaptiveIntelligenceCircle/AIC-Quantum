#pragma once 
#include <iostream> 
using namespace std; 

#include <vector> 
#include <unordered_map>

namespace aic 
{
    struct TrustNode 
    {
        int id; 
        double trust_score; 
    }; 

    class TrustModel 
    {
        public: 
        void add_node(int id, double initial_trust); 
        void entangle(int a , int b, double weight); 
        void update_trust(int id , double delta); 
        double get_trust(int id) const; 

        int id; 
        double trust_score; 

        private: 
        unordered_map<int, TrustModel> nodes; 
        unordered_map<int, vector<pair<int, double>>> edges; 
    }; 
}