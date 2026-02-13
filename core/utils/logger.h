#pragma once 

#include "../include/aic/logging_interface.h"
#include <iostream> 

using namespace std;

namespace aic 
{
    class ConsoleLogger : public LoggingInterface 
    {
        public: 
        void info(const string &msg) override; 
        void warn(const string &msg) override; 
        void error(const string &msg) override; 
    }; 

}