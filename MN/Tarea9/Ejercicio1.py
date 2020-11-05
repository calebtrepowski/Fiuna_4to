'''
********************************************************
========== PROGRAMA HECHO EN Python v3.8.5 ============
----- numpy v1.19.1
Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
Alumno: CALEB TREPOWSKI CASTILLO
********************************************************
'''
""" Tarea 9, Ejercicio 1
Un cuerpo se encuentra en un plano horizontal unido a un resorte, se lo
desplaza 2m desde la posicion de equilibrio y luego se le retiene.
En t = 0 se lo suelta. ara dicho cuerpo, la ecuacio del movimiento armonico
esta dada por:
    x'' + 16x = 0
Utilizando el metodo de Runge-Kutta de orden 4 en Python y h = 10e-3, halle
x(t) hasta t = 5.
"""
import numpy as np
import matplotlib.pyplot as plt

"""
realizando el cambio de variable: x' = y => x'' = y'.
Reemplazando queda el sistema:
    x' = y
    y' = -16x
con x(0) = 2 y x' = y(0) = 0
"""
dF = lambda t,X: np.array([ X[1] , -16*X[0] ])
a = 0
b = 5
h = 10e-3
M = int((b-a)/h) #subintervalos

t = np.linspace(a,b,M+1)
X = np.zeros((2,M+1))

X[0,0] = 2
X[1,0] = 0

for k in range(0,M):
  F1 = dF(t[k],X[:,k])
  F2 = dF(t[k] + h/2, X[:,k] + F1*h/2)
  F3 = dF(t[k] + h/2, X[:,k] + F2*h/2)
  F4 = dF(t[k] + h, X[:,k] + F3*h)
  
  X[:,k+1] = X[:,k] + (h/6)*(F1 + 2*F2 + 2*F3 + F4)
#Solucion analitica
xexact = lambda t: 2*np.cos(4*t)
plt.plot(t,X[0,:])
plt.plot(t,xexact(t))
plt.legend(["sol aproximada","sol real"])
plt.show()
