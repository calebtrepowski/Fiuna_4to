""" Clase Virtual 12/SEP/2020
Integracion de Montecarlo por el Teorema del valor
Intermedio """

import numpy as np
f = lambda x: np.exp(x)

a = 0
b = 1
N = 5000
x = np.linspace(a,b,N)
fc = np.mean(f(x))

I = (b-a)*fc
print(I)