#include "runtime_context.h"
using namespace std; 

namespace aic 
{
    RuntimeContext :: RuntimeContext(
        const CoreConfig &config, 
        LoggingInterface *logger 
    ): config_(config), logger_(logger){}
    
    const CoreConfig &RuntimeContext :: config() const 
    {
        return config_; 
    }

    LoggingInterface * RuntimeContext :: logger() const
    {
        return logger_; 
    }
}