import numpy as np 

class DecoherenceModel:
    """
    Docstring for DecoherenceModel
    """
    def __init__(self, noise_strength: float = 0.00):
        self.noise_strength = noise_strength
    
    def apply(self, state: np.ndarray):
        noise = (np.random.randn(*state.shape) +
                 1j *np.random.randn(*state.shape)) * self.noise_strength
        noisy_state = state + noise 
        return noisy_state /np.linalg.norm(noisy_state)