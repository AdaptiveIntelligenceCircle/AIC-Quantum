import numpy as np 

class ProbabilisticSearch: 
    def search(self, objective_fn , candidates):
        scores = np.array([objective_fn(c) for c in candidates])
        probs = scores/np.sum(scores)
        idx = np.random.choice(len(candidates), p = probs)
        return candidates[idx]