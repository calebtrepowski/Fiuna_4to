import numpy as np
import numpy.linalg as la
import matplotlib.pyplot as plt

##Datos

X = np.array([0.2,0.4,0.6,0.8,1.0],dtype=float)
Y = np.array([0.1960,0.7850,1.7665,3.1405,4.9075],dtype=float)

N = len(X)
M = 2

plt.scatter(X,Y)
#plt.show()

A = sum(X**2*Y)/sum(X**4)

f = lambda X: A*X**M

ejeX = np.linspace(min(X), max(X), 100)
ejeY = f(ejeX)

plt.plot(ejeX, ejeY)
plt.show()

Ym = np.mean(Y)

SSres = sum( (f(X)-Y)**2 )
SStot = sum ( (Ym-Y)**2 )

Rcuad = 1- SSres/SStot
print(Rcuad)