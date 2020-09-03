""" 
Recta de regresion en minimos cuadrados
"""

import numpy as np
import numpy.linalg as la
import matplotlib.pyplot as plt

##Datos

X = np.array([-1,0,1,2,3,4,5,6],dtype=float)
Y = np.array([10,9,7,5,4,3,0,-1],dtype=float)

N = len(X)

plt.scatter(X,Y)

##Armar las ecuaciones normales

A = np.zeros([2,2])

A[0,0] = sum(X**2)
A[0,1] = sum(X)
A[1,0] = sum(X)
A[1,1] = N

B=np.zeros(2)

B[0] = sum(X*Y)
B[1] = sum(Y)

sol = np.dot(la.inv(A),B) #u otro metodo de resolucion de ec. lineales
#sol[0]=A, sol[1]=B
#y=Ax+B

f = lambda x: sol[0]*x+sol[1]

plt.plot(X,f(X))
plt.show()

Ym = np.mean(Y)

SSres = sum( (f(X)-Y)**2 )
SStot = sum ( (Ym-Y)**2 )

Rcuad = 1- SSres/SStot
print(Rcuad)

