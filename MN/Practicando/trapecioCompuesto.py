import numpy as np

f = lambda x: 1/(x*np.log(x)**4)
a = 2
b = 3
N = 100 #subintervalos
h = (b-a)/N

w = np.ones(N+1)
w[1:-1]+=1
x = np.linspace(a,b,N+1)
fx = f(x)

I = (h/2)*np.dot(fx,w)

print(I)