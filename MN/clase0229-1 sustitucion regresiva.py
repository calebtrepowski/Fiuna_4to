### METODO DE ELIMINACION GAUSSIANA CON SUSTITUCION REGRESIVA ###

import numpy as np
import numpy.linalg as la

### DATOS

#A = np.array( [ [4,-1,1],[4,-8,1],[-2,1,5] ] , dtype = float ) #el 2do parametro para convertir todo a float y que no hayan problemas al dividir
A = np.array( [ [1,2,3],[2,4,6],[-2,1,5] ] , dtype = float )
B = np.transpose( np.array( [[7,-21,15]] , dtype = float ) )
N = len(B)

### CONSTRUCCION DE LA MATRIZ AMPLIADA

M = np.concatenate( (A,B), axis = 1 ) #axis = 0 concatena verticalmente, axis = 1 concatena horizontalmente

print(la.det(A))

if la.det(A) == 0:
    raise NameError('El determinante de A es 0')

### ELIMINACION GAUSSIANA

for j in range(0,N-1):
    ### Verificacion del pivot
    if M[j,j] == 0:
        for k in range(j+1,len(M)):
            ### Intercambio de filas
            if M[k,j] != 0:
                aux = M[k,:].copy() ### Si se hace la asignacion B = A en vectores, asigna la direccion de A a B, entonces cualquier modificacion a B tambien se hace a A, entonces se usa B = A.copy()
                M[k,:] = M[j,:].copy()
                M[j,:] = aux.copy()
                break
            if k == N-1:
                raise NameError('El determinante de A es 0')
                
    for i in range(j+1,N):
        mult = M[i,j] / M[j,j]
        M[i,:] = M[i,:] - mult*M[j,:]
        #print(M)

### RECUPERAMOS LA NUEVA A Y LA NUEVA B
A = M[:,0:-1].copy() ###Lo del indice negativo hice yo nomas, el prof hizo de otra forma. Probá como funciona.
B = M[:,-1].copy()
print(M)
print(A)
print(B)

### SUSTITUCION REGRESIVA

X = np.zeros( (N,1) )
X[N-1] = B[N-1] / A[N-1,N-1]
'''falta terminar'''
print(X)
