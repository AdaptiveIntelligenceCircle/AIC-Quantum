-- audit_logger.lua 
-- Structured governance event logger.. 

local AuditLogger = {}

local logs = {}

function AuditLogger.record(event_type, actor, metadata)
    local entry = 
    {
        timestamp = os.time(), 
        event_type = event_type, 
        actor = actor, 
        metadata = metadata
    }

    table.insert(logs, entry)
end 

function AuditLogger.get_all()
    return logs 
end 

return AuditLogger