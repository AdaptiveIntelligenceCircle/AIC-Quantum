#include <chrono>
#include <thread>

using namespace std; 

namespace aic 
{
    void simulate_load(int milliseconds)
    {
        this_thread :: sleep_for(chrono :: milliseconds(milliseconds)); 
    }
}