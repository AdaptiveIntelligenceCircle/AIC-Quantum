import numpy as np 

class CollapseAttackSimulation:

    def bias_distribution(self, probs, bias_index, strength = 0.2):
        modified = probs.copy()
        modified[bias_index] += strength
        modified /= np.sum(modified)

        return modified
    
    def simulate(self, probs, bias_index):
        biased = self.bias_distribution(probs, bias_index)
        return np.random.choice(len(biased), p = biased)