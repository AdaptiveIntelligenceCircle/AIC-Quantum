#include <iostream>
using namespace std; 

#include <string>
#include <cmath>

namespace aic 
{
    void run_stress_test(double load, double capacity)
    {
        if (load > capacity)
        cout <<"System overload detected" << endl; 
        else 
        cout <<"System stable under stress\n"; 
    }
}