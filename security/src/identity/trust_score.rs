pub struct TrustScore 
{
    score :f64, 
}

impl TrustScore {
    pub fn new() -> Self{
        Self {score : 1.0}
    }

    pub fn penalize(&mut self, amount: f64){
        self.score = (self.score -)
    }

    pub fn reward(&mut self, amount: f64)
    {
        self.score = (self.score + amount).min(1.0); 
    }

    pub fn value(&self) -> f64{
        self.score 
    }
}