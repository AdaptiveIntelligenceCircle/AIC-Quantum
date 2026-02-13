#include "logger.h"
#include <string> 

using namespace std;

namespace aic 
{
    void ConsoleLogger :: info(const string &msg) 
    {
        cout << "INFO" << msg << endl; 
    }

    void ConsoleLogger :: warn(const string &msg)
    {
        cout <<"MSG" << msg << endl; 
    }

    void ConsoleLogger :: error(const string &msg)
    {
        cout <<"ERROR" << msg  << endl; 
    }
}