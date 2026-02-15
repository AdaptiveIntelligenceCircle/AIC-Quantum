import time 

class ExperimentRunner:
    def run(self, experiment_fn, iterations = 100): 
        results = []
        start = time.time()

        for _ in range(iterations): 
            results.append(experiment_fn())
        
        durations = time.time() - start 
        return {
            "results": results, 
            "durations": durations
        }