import numpy as np

f = lambda x: 2+np.sin(2*np.sqrt(x))
a = 1
b = 6
M = 10 #cantidad de subintervalos
h = (b-a)/M

I = (h/2)*( f(a)+f(b) ) #calculo de los terminos extremos
#calculo de los terminos del medio mediante una discretizacion
x = np.linspace(a+h,b-h,M-1)

for i in range(0,len(x)):
  I += h*f(x[i]) #(h/2)*2*f(x[]i) los 2 se simplifican
print(I)

#se puede hacer por otros metodos