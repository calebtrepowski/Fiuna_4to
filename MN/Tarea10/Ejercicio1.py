'''
********************************************************
========== PROGRAMA HECHO EN Python v3.8.5 ============
----- numpy v1.19.1
Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
Alumno: CALEB TREPOWSKI CASTILLO
********************************************************
'''
""" Tarea 10, Ejercicio 1
Use el metodo de biseccion para encontrar soluciones precisas
dentro de 10e−2 para x^3 − 7x^2 + 14x − 6 = 0 en cada intervalo.
[0, 1]
[1.3, 2]
[3.2, 4]
"""
import numpy as np

# DATOS
f = lambda x: x**3 - 7*x**2 + 14*x - 6
A = np.array([0, 1.3, 3.2],dtype=float)
B = np.array([1, 2, 4],dtype=float)

C = np.zeros(3,dtype=float)

epsilon = 1e-2


### VERIFICACION EL TEOREMA DE BOLZANO EN EL INTERVALO [a,b]
for k in range(0,3):
  bisecciones = int(np.ceil((np.log(B[k]-A[k])-np.log(epsilon))/np.log(2)))
  if f(A[k])*f(B[k]) > 0:
    print(f"No se cumple el teorema de Bolzano en el intervalo {k}")
  else:
    for i in range(0,bisecciones):
        C[k] = (A[k]+B[k])/2
        if f(C[k]) == 0:
            break
        elif f(A[k])*f(C[k]) < 0:
            B[k] = C[k]
        else:
            A[k] = C[k]
    print('El cero está en x = ',C[k],'y el valor es',f(C[k]))

  
