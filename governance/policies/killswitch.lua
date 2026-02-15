-- kill_switch.lua 
-- Governance level emergency halt mechanism.. 

local KillSwitch = {}

local state = {
    active = false, 
    activated_by = nil,
    timestamp = nil 
}

function KillSwitch.trigger(actor, timestamp)
    state.active = true 
    state.activated_by = actor 
    state.timestamp = timestamp
    return true 
end 

function KillSwitch.reset()
    state.active = false 
    state.activated_by = nil 
    state.timestamp = nil 
end 

function KillSwitch.status()
    return state 
end 

return KillSwitch