import matplotlib.pyplot as plt
import numpy as np


f = lambda x:x*np.sin(x)-1

x = np.linspace(0,2,50)
y = f(x)
plt.plot(x,y)
plt.grid()
plt.show()