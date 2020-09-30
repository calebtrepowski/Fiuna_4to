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
# t -> variable dependiente
# X -> Vector de variables dependientes
# X = [ X[0],X[1],X[2]... ]
F = lambda t,X: np.array([ X[0]+2*X[1]+0*t , 3*X[0]+2*X[1]+0*t ])

a = 0
b = 0.2
M = 10 #subintervalos
N = M+1 #nodos
h = (b-a)/M

t = np.linspace(a,b,N)
X = np.zeros((2,N))
X[0,0] = 6
X[1,0] = 4
# Metodo de Euler Vectorizado
for k in range(0,N-1):
  X[:,k+1] = X[:,k] + h*F( t[k],X[:,k] )

# Solucion analiticas
xexact = lambda t: 4*np.exp(4*t) + 2*np.exp(-t)
yexact = lambda t: 6*np.exp(4*t) - 2*np.exp(-t)

plt.plot(t,xexact(t))
plt.plot(t,yexact(t))

plt.plot(t,X[0,:])
plt.plot(t,X[1,:])
plt.legend(['x exacta','y exacta','x numerica','y numerica'])

plt.show()