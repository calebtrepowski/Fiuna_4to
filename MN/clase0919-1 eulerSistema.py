# Clase virtual 19/SEP/2020
# Sistemas de ecuaciones diferenciales
# Metodo de Euler
import numpy as np
import matplotlib.pyplot as plt

""" 
x' = x + 2y con x(0) = 6 en [0,0.2]
y' = 3x + 2y con y(0) = 4 en [0,0.2]
"""
# Datos
f = lambda t,x,y: x + 2*y + 0*t
g = lambda t,x,y: 3*x + 2*y + 0*t

a = 0
b = 0.2
M = 1000 #subintervalos
N = M+1 #nodos
h = (b-a)/M

t = np.linspace(a,b,N)
x = np.zeros(N)
y = np.zeros(N)
x[0] = 6
y[0] = 4
# Metodo de Euler
for k in range(0,N-1):
  x[k+1] = x[k] + h*f( t[k],x[k],y[k] )
  y[k+1] = y[k] + h*g( t[k],x[k],y[k] )

# Solucion analiticas
xexact = lambda t: 4*np.exp(4*t) + 2*np.exp(-t)
yexact = lambda t: 6*np.exp(4*t) - 2*np.exp(-t)

plt.plot(t,xexact(t))
plt.plot(t,yexact(t))

plt.plot(t,x)
plt.plot(t,y)
plt.legend(['x exacta','y exacta','x numerica','y numerica'])

plt.show()