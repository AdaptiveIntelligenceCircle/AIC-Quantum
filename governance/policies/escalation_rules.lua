-- escalation_rules.lua 
-- Defines escalation paths based on risk levels.. 

local EscalationRules = {}

local LEVELS = 
{
    LOW = 1, 
    MEDIUM = 2, 
    HIGH = 3, 
    CRITICAL = 4 
}

function EscalationRules.evaluate(risk_score)
    if risk_score < 0.25 then 
        return LEVELS.LOW 
    elseif risk_score < 0.5 then
        return LEVELS.MEDIUM
    elseif risk_score < 0.75 then 
        return LEVELS.HIGH
    else 
        return LEVELS.CRITICAL
    end 
end 

function EscalationRules.required_action(level)
    if level == LEVELS.CRITICAL then 
        return "trigger_kill_switch"
    elseif level == LEVELS.HIGH then 
        return "require_multi_sig_approval"
    elseif level == LEVELS.LOW then
        return  "log_and_monitor"
    else 
        return "allow"
    end 
end 

return EscalationRules