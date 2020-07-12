#import matplotlib.pyplot as plt
#import numpy as np
from matplotlib.pyplot import *
from numpy import *

f = lambda x:x*sin(x)-1

x = linspace(0,2,50)
y = f(x)
plt.plot(x,y)
show()
grid()