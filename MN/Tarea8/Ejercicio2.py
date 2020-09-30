'''
********************************************************
========== PROGRAMA HECHO EN Python v3.8.5 ============
----- numpy v1.19.1
Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
Alumno: CALEB TREPOWSKI CASTILLO
********************************************************
'''

''' Tarea 8, Ejercicio 2
Un paracaidista salta desde un helicoptero. Hasta el momento
en que abre el paracaidas, la resistencia del aire es propor-
cional a v^(3/2) (donde v es la velocidad de caida). La
ecuacion diferencial que describe la velocidad es:
v' = 10 - 0.01*v^(3/2)
Asumiendo que el paracaidista parte del reposo en el
helicoptero, utilice el metodo de Euler en Python con h = 0.01
para calcular la velocidad final antes de abrir el paracaidas
si tardo 6 segundos en abrirlo.
'''

import numpy as np
df = lambda t,v: 10-0.01*v**(3/2)
a = 0
b = 6
h = 0.01
M = int((b-a)/h) #subintervalos

t = np.linspace(a,b,M+1)
ye = np.zeros(M+1)

for k in range(0,M):
  ye[k+1] = ye[k] + h*df(t[k],ye[k])

print(ye[-1])