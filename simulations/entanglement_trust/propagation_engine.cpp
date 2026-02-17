#include "trust_model.h"

namespace aic 
{
    void propagate_trust(TrustModel& model, int source, double impact) 
    {
        model.update_trust(source, impact);
    }
}
