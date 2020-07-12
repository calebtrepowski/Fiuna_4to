### METODO ITERATIVO DE GAUSS SEIDEL PARA SISTEMAS DE ECUACIONES LINEALES ###
import numpy as np
import numpy.linalg as la

### DATOS

A = np.array( [ [4,-1,1],[4,-8,1],[-2,1,5] ] , dtype = float )
B = np.array( [ [7],[-21],[15] ] , dtype = float )
N = len(B)
iter_max = 30
P = np.array([1,2,2] , dtype = float)
epsilon = 0.000000001
X = np.zeros(N)

###

cortar = 0

for i in range(0,iter_max):
    for k in range(0,N):
        pos = np.array( range(0,N) )
        pos = np.delete(pos,k)
        X[k] = ( B[k] - np.dot( A[k,pos],P[pos] ) ) / A[k,k]
        aux = P.copy()
        P[k] = X[k]

    if la.norm(aux-X) < epsilon: ###condicion de parada
        print('Se alcanzo la tolerancia')
        break #para salir del for interno
        '''no hace falta actualizar la solucion porque X va siendo igual a P'''
    print(X)
    
'''
EL TALLER VA A SER LAS 3 HORAS DE PRACTICA

3 O 4 TEMAS

POR CADA INSTRUCCION QUE NO SE CUMPLA, SE DESCUENTAN PUNTOS
    ej: llamar a todas las variables como dice el temario
'''