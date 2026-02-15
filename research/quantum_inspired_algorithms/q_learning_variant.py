import numpy as np 

class QuantumInspiredQLearning: 
    """
    Docstring for QuantumInspiredQLearning
    """
    def __init__(self, states, actions, alpha = 0.1, gamma = 0.95):
        self.q = np.random.rand(states, actions)
        self.alpha = alpha 
        self.gamma = gamma 
    
    def update(self, s,a , reward, s_next):
        best_next = np.max(self.q[s_next])
        self.q[s, a] += self.alpha * (
            reward + self.gamma * best_next - self.q[s, a]
        )
    
    def policy(self, s):
        probs = self.q[s] / np.sum(self.q[s])
        return np.random.choice(len(probs), p = probs)
