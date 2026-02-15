import numpy as np 

class AmplitudeModel:
    """
    Docstring for AmplitudeModel
    """
    def __init__(self, dimension: int):
        self.dimension = dimension 
        self.state = self._random_state()
    
    def _randomd_state(self): 
        vec = np.random.randn(self.dimension) + 1j * np.random.randn(self.dimension)
        return vec / np.linalg.norm(vec)
    
    def evolve(self, unitary : np.ndarray): 
        self.state = unitary @self.state 
        self.state /= np.linalg.norm(self.state)
    
    def probabilities(self):
        return np.abs(self.state) ** 2 
    
    def measure(self):
        probs = self.probabilities()
        return np.random.choice(len(probs), p = probs)

