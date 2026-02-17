#include <iostream>
using namespace std; 

#include <vector> 

namespace aic 
{
    vector<int> cascade_failures(const vector<double>& capital,double threshold)
    {
    vector<int> failed;

    for (size_t i = 0; i < capital.size(); ++i) 
    {
        if (capital[i] < threshold)
            failed.push_back(i);
    }

    return failed;
    }
}