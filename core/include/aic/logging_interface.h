#pragma once 

#include <iostream>
#include <string> 

using namespace std; 

namespace aic 
{
    class LoggingInterface 
    {
        public:
        virtual ~LoggingInterface() = default;
        virtual void info(const string &msg) = 0; 
        virtual void warn(const string &msg) = 0; 
        virtual void error(const string &msg) = 0; 
    }; 
}