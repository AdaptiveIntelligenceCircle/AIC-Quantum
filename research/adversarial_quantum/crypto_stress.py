import numpy as np 

class CryptoStressTest: 
    def simulate_hash_collisions(self, trials = 10000): 
        seen = set()
        collisions = 0 

        for _ in range(trials):
            val = np.random.randint(0, 1_000_000)
            if val in seen:
                collisions +=1 
            seen.add(val)

        return collisions