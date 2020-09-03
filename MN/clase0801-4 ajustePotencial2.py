""" 
Ajuste exponencial
"""

import numpy as np
import numpy.linalg as la
import matplotlib.pyplot as plt

##Datos

X = np.array([0.2,0.4,0.6,0.8,1.0],dtype=float)
Y = np.array([0.1960,0.7850,1.7665,3.1405,4.9075],dtype=float)
Xn = np.log(X)
Yn = np.log(Y)

N = len(X)

plt.scatter(X,Y)

##Armar las ecuaciones normales

A = np.zeros([2,2])

A[0,0] = sum(Xn**2)
A[0,1] = sum(Xn)
A[1,0] = sum(Xn)
A[1,1] = N

B = np.zeros(2)

B[0]=sum(Xn*Yn)
B[1]=sum(Yn)

sol = np.dot(la.inv(A),B)

#y = Ae^(Mx)


M = sol[0]
A = np.exp(sol[1])

f = lambda x: A*(x**M)

ejex = np.linspace(min(X),max(X),100)
ejey = f(ejex)

plt.plot(ejex,ejey)


Ym = np.mean(Y)

SSres = sum((f(X)-Y)**2)
SStot = sum((Ym-Y)**2)

Rcuad = 1 - SSres/SStot
print(A,M)
print(Rcuad)
plt.show()