use serde::{Serialize, Deserialize}; 

#[derive(Serialize, Deserialize, Debug, Clone)]

pub struct Credential
{
    pub issuer: String, 
    pub subject: String, 
    pub signature: Vec<u8>, 
}