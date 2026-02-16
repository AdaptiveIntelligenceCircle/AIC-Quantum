use thiserror::Error; 

#[derive(Error, Debug)]

pub enum CryptoError 
{
    #[error("invalid key")]
    InvalidKey, 

    #[error("Verification Failed")]
    VerificationFailed, 

    #[error("Key exchange failed")]
    KeyExchangeFailed, 
}