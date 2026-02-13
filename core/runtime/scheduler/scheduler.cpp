#include "scheduler.h"

#include <string> 

using namespace std; 

namespace aic 
{
    Scheduler :: Scheduler(
        QuantumEngine &engine, 
        RuntimeContext &context, 
        ExecutionBoundary &boundary 
    )
    : engine_(engine), context_(context), boundary_(boundary){}

    ErrorCode Scheduler :: run_step(
        const EntropyBuffer &entropy, 
        Timestamp current_time, 
        size_t &result
    )
    {
        auto step_check = boundary_.check_step(); 
        if (step_check != ErrorCode :: OK)
        {
            return step_check; 
        }

        auto time_check = boundary_.check_time(current_time); 

        if (time_check != ErrorCode :: OK)
        return time_check; 

        // auto err = engine_.execute(entropy, result);
        
        // if (err != ErrorCode :: OK)
        // {
        //     if(context_.logger())
        //     {
        //         context_.logger()-> error("engine execution failed"); 
        //         return err; 
        //     }
        // }

        // if (context_.logger())
        // context_.logger() -> info("Execution step completed"); 

        // return ErrorCode :: OK;

    }
}