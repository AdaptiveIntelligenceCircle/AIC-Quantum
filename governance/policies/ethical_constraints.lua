-- ethical_constraints.lua 
-- Defines non-negotiable ethical boundaries for AIC Core.. 

local EthicalConstraints = {}

local HARD_CONSTRAINTS = 
{
    no_self_modifying_core = true, 
    no_unbounded_autonomy = true, 
    no_hidden_state_mutation = true,
    no_consensus_bypass = true 
}

local SOFT_CONSTRAINTS = 
{
    require_audit_roadmap = true, 
    require_explainability = true, 
    require_human_override = true 
}

function EthicalConstraints.validate(action)
    if action.modify_core and HARD_CONSTRAINTS.no_self_modifying_core then 
        return false, "Core modification is prohibited"
    end 

    if action.bypass_consensus and HARD_CONSTRAINTS.no_consensus_bypass then
        return false, "Consensus bypass is prohibited"
    end

    if action.disable_logging and SOFT_CONSTRAINTS.require_audit_roadmap then 
        return false, "Audit logging cannot be disabled"
    end 

    return true , "Action Allowed"
end 

return EthicalConstraints