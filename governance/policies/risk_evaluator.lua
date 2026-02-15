-- risk_evaluator.lua 
-- Evaluates probabilistic system risk.. 

local RiskEvaluator = {}

function RiskEvaluator.compute(amplitude_variance, consensus_divergence, runtime_stress)
    local score = 
    (amplitude_variance *0.4) + 
    (consensus_divergence *0.4) + 
    (runtime_stress *0.2)

    return math.min(score, 1.0)
end 

return RiskEvaluator