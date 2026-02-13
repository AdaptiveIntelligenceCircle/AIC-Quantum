#pragma once 
#include <string> 

using namespace std; 

#include "../include/aic/core_config.h"
#include "../include/aic/types.h"
#include "../include/aic/logging_interface.h"

namespace aic 
{
    class RuntimeContext 
    {
        public: 
        RuntimeContext(
            const CoreConfig &config, 
            LoggingInterface *logger 
        );  

        const CoreConfig &config() const; 
        LoggingInterface *logger() const;

        private: 
        CoreConfig config_; 
        LoggingInterface *logger_; // not owned. 
    }; 
}