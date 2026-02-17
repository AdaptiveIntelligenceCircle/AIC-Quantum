#include <string> 

using namespace std; 

namespace aic 
{
    bool allow_replay(const string &role)
    {
        if (role == "auditor") return true;
        return false;  
    }
}