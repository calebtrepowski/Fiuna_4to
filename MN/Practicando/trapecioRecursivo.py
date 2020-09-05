import numpy as np

f = lambda x: 1/(x*np.log(x)**4)
a = 2
b = 3
N = 30 #cantidad de veces a emplear trapecio

h = b-a
I = (h/2)*(f(a)+f(b))

for i in range(1,N):
  h = h/2
  x = np.linspace(a,b,2**i+1)
  I = I/2 + h*(np.sum(f(x[1:len(x):2])))

print(I)