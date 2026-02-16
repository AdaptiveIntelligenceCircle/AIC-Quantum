use rand::Rng; 

pub struct LatticKeyPair
{
    pub public: Vec<u8>, 
    pub private: Vec<u8>, 
}

pub fn generate_keypair() -> LatticeKeyPair
{
    let mut rng = rand::thread_rng(); 
    let public: Vec<u8> = (0..32).map(|_| rng.gen()).collect(); 
    let private: Vec<u8> = (0..64).map(|_| rng.gen()).collect(); 

    LattucKeyPair {public, private}
}