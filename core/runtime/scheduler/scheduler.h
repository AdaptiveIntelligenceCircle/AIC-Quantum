#pragma once 

#include "../engine/quantum/quantum_engine.h"
#include "execution_boundary.h"
#include "runtime_context.h"
using namespace std; 

namespace aic 
{
    class Scheduler 
    {
        public: 
        Scheduler (
            QuantumEngine &engine , 
            RuntimeContext &context, 
            ExecutionBoundary &boundary
        ); 

        ErrorCode run_step(
            const EntropyBuffer &entropy, 
            Timestamp current_time, 
            size_t &result
        ); 

        private: 
        QuantumEngine &engine_; 
        RuntimeContext &context_; 
        ExecutionBoundary &boundary_; 
    };
}

