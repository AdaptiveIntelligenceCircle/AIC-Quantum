use super::violations::ViolationType;
use super::escalation::{escalate, EscalationLevel}; 

pub struct SandboxGuard; 

impl SandboxGuard{
    pub fn check_memory(limit: usize, used: usize) -> Option<EscalationLevel>{
        if used > limit {
            Some(escalate(ViolationType::MemoryOverflow))
        }else{
            None 
        }
    }
}