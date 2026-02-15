import numpy as np 

class AdversarialNoise:
    def inject(self, state, magnitude = 0.1):
        direction = np.sign(state)
        perturbation = direction * magnitude
        new_state = state + perturbation
        return new_state / np.linalg.norm(new_state)