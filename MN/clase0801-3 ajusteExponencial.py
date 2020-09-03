""" 
Ajuste exponencial
"""

import numpy as np
import numpy.linalg as la
import matplotlib.pyplot as plt

##Datos

X = np.array([0,1,2,3,4],dtype=float)
Y = np.array([1.5,2.5,3.5,5.0,7.5],dtype=float)
#Xn = .... deberia aparecer si el cambio de variable afecta a la X
Yn = np.log(Y)

N = len(X)

plt.scatter(X,Y)

##Armar las ecuaciones normales

A = np.zeros([2,2])

A[0,0] = sum(X**2)
A[0,1] = sum(X)
A[1,0] = sum(X)
A[1,1] = N

B = np.zeros(2)

B[0]=sum(X*Yn)
B[1]=sum(Yn)

sol = np.dot(la.inv(A),B)

#y = Ce^(Ax)


A = sol[0]
C = np.exp(sol[1])

f = lambda x: C*np.exp(A*x)

ejex = np.linspace(min(X),max(X),100)
ejey = f(ejex)

plt.plot(ejex,ejey)
plt.show()

Ym = np.mean(Y)

SSres = sum((f(X)-Y)**2)
SStot = sum((Ym-Y)**2)

Rcuad = 1 - SSres/SStot

print(Rcuad)