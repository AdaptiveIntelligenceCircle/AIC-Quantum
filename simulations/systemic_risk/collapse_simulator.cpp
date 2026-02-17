#include <iostream> 
using namespace std; 

#include <vector> 
#include <string> 

namespace aic 
{
    void simulate_collapse(vector<double> &capital, double shock, double threshold)
    {
        for (auto &c : capital)
        c -= shock; 

        for (size_t i = 0 ; i < capital.size(); ++i)
        if (capital[i] < threshold)
        cout << "Node" << i << "collapsed.\n" ; 
    }
}