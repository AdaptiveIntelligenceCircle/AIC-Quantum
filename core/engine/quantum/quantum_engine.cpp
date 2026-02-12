#include "quantum_engine.h"
using namespace std; 

namespace aic 
{
    QuantumEngine :: QuantumEngine(size_t state_size, double noise)
    : machine_(state_size), noise_(noise){}

    ErrorCode QuantumEngine :: execute(
        const ErrorCode &entropy, 
        size_t &result 
    )
    {
        noise_.apply(machine_.state()); 
        
    }
}