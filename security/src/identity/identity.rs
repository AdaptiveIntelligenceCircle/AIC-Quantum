use serde::{Serialize, Deserialize}; 

#[derive(Serialize, Deserialize, Debug, Clone)]

pub struct Identity
{
    pub id: String,
    pub public_key: Vec<u8>, 
}