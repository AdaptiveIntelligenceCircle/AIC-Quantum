import numpy as np

class AnnealingStrategy:

    def __init__(self, initial_temp=1.0, decay=0.99):
        self.temp = initial_temp
        self.decay = decay

    def step(self):
        self.temp *= self.decay

    def accept(self, delta_energy):
        if delta_energy < 0:
            return True
        prob = np.exp(-delta_energy / self.temp)
        return np.random.rand() < prob
