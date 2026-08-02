import pandas as pd
import matplotlib.pyplot as plt
import os

if not os.path.exists('costs.csv'):
    print("costs.csv not found")
    exit(1)

df = pd.read_csv('costs.csv')

plt.figure(figsize=(10, 6))

for restart in df['Restart'].unique():
    subset = df[df['Restart'] == restart]
    plt.plot(subset['Epoch'], subset['BestCost'], label=f'Restart {restart}')

plt.title('Miglior Costo per Epoca (Evolutionary Strategy)')
plt.xlabel('Epoca')
plt.ylabel('Costo Totale')
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.savefig('cost_plot.png', dpi=300)
print("Plot saved to cost_plot.png")
