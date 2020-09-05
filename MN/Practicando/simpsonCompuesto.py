import numpy as np

f = lambda x: 1/(x*np.log(x)**4)
a = 2
b = 3
N = 10 #subintervalos, debe ser par
#N+1 nodos
h = (b-a)/N

w = np.ones(N+1)
for i in range(1,N):
  if i%2==0:
    w[i] = 2
  else:
    w[i] = 4

x = np.linspace(a,b,N+1)

fx = f(x)
I = (h/3)*np.dot(fx,w)
print(I)
