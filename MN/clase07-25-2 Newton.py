'''
Clase virtual 07/25/2020 - Juan Zena
POLINOMIO INTERPOLADOR DE NEWTON

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

## Tabla de diferencias divididas
D = np.zeros([N,N])

D[:,0] = Y

for j in range(1,N): #j maneja columnas
  
  for i in range(j,N): #i maneja filas
    D[i,j] = (D[i,j-1]-D[i-1,j-1]) / (X[i]-X[i-j])
    #el salto en el denominador depende de j


## Reconstruccion del polinomio por multiplicaciones
#encajadas

S = D[N-1,N-1] #para este caso: D(2,2)

for k in range(N-2,-1,-1):
  S = np.convolve(S,np.array([1,-X[k]]))
  S[len(S)-1] += D[k,k]

verif = np.polyval(S,X)
print(S,verif)