use rand::Rng; 

pub fn derive_shared_secret(pub_a : &[u8], pub_b : &[u8]) -> Vec<u8>{
    pub_a.iter()
        .zip(pub_b.iter())
        .map(|(a, b)| a ^b)
        .collect()
}