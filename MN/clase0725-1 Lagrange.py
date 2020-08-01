'''
Clase virtual 07/25/2020 - Juan Zena
POLINOMIO INTERPOLADOR DE LAGRANGE

Determine el polinomio interpolador que pasa por los puntos
(0,1) (1,9) (-1,-1)
'''

import numpy as np
import matplotlib.pyplot as plt

## Datos
#Conviene poner ordenado -> x0<x1<x2
X = np.array([-1,0,1], dtype=float)
Y = np.array([-1,1,9], dtype=float)

N = len(X)

pol = 0

for j in range(0,N):        #para la sumatoria
  L = 1
  for k in range(0,N):      #para el productorio
    if j != k:
      # (x-x0)(x-x1)(x-x2) ---> array([1,-x0]),array([1,-x1])...
      # np.convolve(X,Y) devuelve el producto de los
      #polinomios X e Y expresados como vectores
      # en matlab convolve --> conv
      L = np.convolve( L,np.array([1,-X[k]])/(X[j]-X[k]) )
  
  pol += Y[j]*L


verif = np.polyval(pol,X) #para verificar la solucion
ejeX = np.linspace(-1,1,100)
ejeY = np.polyval(pol,ejeX)

plt.scatter(X,Y) #para graficar puntos
plt.plot(ejeX,ejeY)
plt.show()

print(pol)
print(verif)