import numpy as np

f = lambda x,y: np.sin(x)*y

a = 2
b = 3
c = 4
d = 5

M = N = 5 #pueden ser distintos tambien

x = np.linspace(a,b,M)
y = np.linspace(c,d,N)

fc = 0

for i in x:
  for j in y:
    fc += f(i,j)

fc = fc/(M*N)

I = (b-a)*(d-c)*fc
print(I)