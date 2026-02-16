use super::crypto_errors::CryptoError; 
use sha2::{Sha256, Digest}; 

pub fn sign(message: &[u8], private_key: &[u8]) -> Vec<u8>{
    let mut hasher = Sha256 :: new(); 
    hasher.update(message);
    hasher.update(private_key); 
    hasher.finalize().to_vec()
}

pub fn verify(message: &[u8], signature : &[u8], public_key : &[u8]) -> Result(), CryptoError>
{
    let mut hasher = Sha256::new(); 
    hasher.update(message); 

    hasher.update(public_key); 
    let expected = hasher.finalize().to_vec(); 

    if expected == signature{
        OK(())
    }else 
    {
        Err(CryptoError::VerificationFailed)
    }
}