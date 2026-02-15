import numpy as np 

class BenchmarkSuite: 
    
    def benchmark_entropy(self, distribution):
        from quantum_models.probability_distribution import ProbabilityDistribution
        return ProbabilityDistribution.entropy(distribution)

    def benchmark_stability(self, states):
        diffs = [np.linalg.norm(states[i] - states[i-1])
                 for i in range(1, len(states))]
        return np.mean(diffs)