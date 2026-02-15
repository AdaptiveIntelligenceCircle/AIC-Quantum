import numpy as np 

class ProbabilityDistribution:
    @staticmethod
    def entropy(probs: np.ndarray):
        probs = probs[probs > 0]
        return -np.sum(probs *np.log2(probs))
    
    @staticmethod
    def kl_divergence(p, q): 
        mask = (p>0) &(q >0)
        return np.sum(p[mask] *np.log(p[mask] / q[mask]))