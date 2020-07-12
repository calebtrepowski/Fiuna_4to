''' CAP2: RESOLUCION DE SISTEMAS DE ECUACIONES LINEALES '''

import numpy as np
import numpy.linalg as la

#1 ELIMINACION GAUSSIANA CON SUSTITUCION REGRESIVA

A = np.array([[1,2,3],[2,4,7],[2,5,6]],dtype = float)
B = np.array([[7],[8],[9]])
B1 = np.transpose(np.array([[7,8,9]]))
determinante = la.det(A)
print(determinante)

x = la.inv(A)*B #no hace multiplcacion matricial
x = np.dot(la.inv(A),B)
print(x)

print(np.dot(A,x))