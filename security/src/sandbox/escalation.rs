use super::violation::ViolationType; 

pub enum EscalationLevel
{
    Warning, 
    Restrict, 
    Terminate,
}

pub fn escalate(v: ViolationType) -> EscalationLevel{
    match v{
        ViolationType::MemoryOverflow => EscalationLevel::Terminate,
        ViolationType::UnauthorizedAccess => EscalationLevel::Terminate, 
        ViolationType::ResourceAbuse => EscalationLevel::Restrict, 
    }
}