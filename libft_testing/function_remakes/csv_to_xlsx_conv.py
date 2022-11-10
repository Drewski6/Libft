import sys
import pandas as pd

output = pd.read_csv(sys.argv[1])
output.to_excel("output.xlsx")
