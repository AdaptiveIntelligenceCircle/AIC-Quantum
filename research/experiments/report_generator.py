import pandas as pd 

class ReportGenerator:
    def generate(self, results, filename = "report.csv"):
        df = pd.DataFrame(results)
        df.to_csv(filename, index = False)
        return filename