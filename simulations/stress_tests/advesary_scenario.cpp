#include <iostream>

#include <random>
using namespace std;

namespace aic 
{
    double simulate_adversarial_attack(double base_risk)
    {
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<>dis(0.1, 0.5); 
        
        double amplification = dis(gen); 
        return base_risk *(1.0 + amplification); 
    }
}