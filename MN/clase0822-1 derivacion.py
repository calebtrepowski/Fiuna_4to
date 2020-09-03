"""
Programa que grafique la derivada de una funcion f(x)
en un  intervalo
"""
import numpy as np
import matplotlib.pyplot as plt
f = lambda x: np.cos(2*x) + np.sin(3*x)
df = lambda x: -2*np.sin(2*x) + 3*np.cos(3*x)

a = 0
b = 5
M = 50 #Cantidad de subintervalos
h = (b-a)/M 

## Solucion analitica ##
ejeX = np.linspace(a,b,100)
ejedY = df(ejeX)
ejeY = f(ejeX)
#plt.plot(ejeX,ejeY)
plt.plot(ejeX,ejedY)

#plt.show()

x = np.linspace(a,b,M+1)
derivada = np.zeros(len(x),dtype=float)
for i in range(0,len(x)):
  if i == 0: #diferencias progresivas
    derivada[i] = ( -3*f(x[i])+4*f(x[i]+h)-f(x[i]+2*h) )/\
      ( 2*h )
  elif i == len(x)-1: #diferencias regresivas
    derivada[i] = ( 3*f(x[i])-4*f(x[i]-h)+f(x[i]-2*h) )/\
      ( 2*h )
  else:
    derivada[i] = ( f(x[i]+h)-f(x[i]-h) )/( 2*h )

plt.plot(x,derivada)
plt.legend(["analitica", "numerica"])
plt.grid()
plt.show()