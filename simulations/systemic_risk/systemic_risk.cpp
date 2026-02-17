#include <iostream>
#include <string> 
#include <vector>
#include <cmath>

namespace aic 
{

double compute_systemic_risk(const std::vector<double>& exposures) 
{
    double sum = 0.0;
    for (double e : exposures)
        sum += e * e;

    return std::sqrt(sum);
}

}