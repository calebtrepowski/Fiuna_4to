""" Clase Virtual 12/SEP/2020
Integracion de Montecarlo por el Teorema del valor
Intermedio """

import numpy as np
f = lambda x: np.sin(2*x)/(1+x**2)

a = 0
b = 1
N = 50
x = np.linspace(a,b,N)
fc = np.mean(f(x))

I = (b-a)*fc
print(I)
