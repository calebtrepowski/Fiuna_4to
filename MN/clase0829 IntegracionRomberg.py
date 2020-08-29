""" Clase virtual 29 AGO 2020
Metodo de integracion de Romberg """
import numpy as np

#DATOS
a = 1
b = 5
f = lambda x: 1/x

N = 4

R = np.zeros((N,N))

#R[0,0] = T[0]
R[0,0] = (b-a)/2*(f(a)+f(b))

#Regla recursiva del trapecio

for j in range(1,N):
  #Cantidad de subintervalos: 1,2,4,8...
  h = (b-a)/(2**j)
  x = np.linspace(a,b,2**j+1)
  sumImpar = 0
  for i in range(0,len(x)):
    #puede ser tambien range(0,len(x),2) asi nos evitamos el if
    if np.mod(i,2) != 0: #corresponde a un nodo impar
      sumImpar = sumImpar + f(x[i])
  R[j,0] = R[j-1,0]/2 + h*sumImpar
print(R) #hasta aca fue metodo compuesto del trapecio

for k in range(1,N):
  for j in range(k,N):
    R[j,k] = (4**k*R[j,k-1] - R[j-1,k-1])/(4**k-1)

print(R)