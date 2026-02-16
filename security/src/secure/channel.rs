pub struct SecureChannel
{
    shared_secret : Vec<u8>, 
}

impl SecureChannel {
    pub fn new(secret: Vec<u8>) -> Self {
        Self { shared_secret: secret }
    }

    pub fn encrypt(&self, data: &[u8]) -> Vec<u8> {
        data.iter()
            .zip(self.shared_secret.iter().cycle())
            .map(|(d, k)| d ^ k)
            .collect()
    }

    pub fn decrypt(&self, data: &[u8]) -> Vec<u8> {
        self.encrypt(data)
    }
}