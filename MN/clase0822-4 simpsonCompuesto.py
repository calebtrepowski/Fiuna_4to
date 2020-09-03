import numpy as np

f = lambda x: 2+np.sin(2*np.sqrt(x))
a = 1
b = 6
M = 10 #cantidad de subintervalos
h = (b-a)/M

I = (h/3)*( f(a)+f(b) ) #calculo de los terminos extremos
#calculo de los terminos del medio mediante una discretizacion
x = np.linspace(a+h,b-h,M-1)

for i in range(0,len(x)):
  if i%2 == 0: # i = 0,2,4,6... nodos impares
    I += (h/3)*4*f(x[i])
  else: # i = 1,3,5,7... nodos pares
    I += (h/3)*2*f(x[i])
print(I)
