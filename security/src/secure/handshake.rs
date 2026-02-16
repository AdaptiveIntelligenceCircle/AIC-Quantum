use crate::post_quantum_crypto::lattice::generate_keypair; 
use crate::post_quantum_crypto::key_exchange::derive_shared_secret;

pub struct HandshakeResult
{
    pub shared_secret: Vec<u8>, 
}

pub fn perform_handshake(peer_public: &[u8]) -> HandshakeResult{
    let local = generate_keypair(); 
    let secret = derive_shared_secret(&local_public, peer_public); 

    HandshakeResult{
        shared_secret: secret,
    }
}