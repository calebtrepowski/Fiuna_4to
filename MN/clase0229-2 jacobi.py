### METODO ITERATIVO DE JACOBI PARA SISTEMAS DE ECUACIONES LINEALES ###
import numpy as np
import numpy.linalg as la

### DATOS

A = np.array( [ [4,-1,1],[4,-8,1],[-2,1,5] ] , dtype = float )
B = np.array( [ [7],[-21],[15] ] , dtype = float )
N = len(B)
iter_max = 30
P = np.array([1,2,2] , dtype = float)
epsilon = 0.001
X = np.zeros(N)

###

cortar = 0

for i in range(0,iter_max):
    for k in range(0,N):
        ## Como hizo el profe
        pos = np.array( range(0,N) )
        pos = np.delete(pos,k)
        X[k] = ( B[k] - np.dot( A[k,pos],P[pos] ) ) / A[k,k]
        
        ##Como propuso un companero
        #X[k] = ( B[k] - np.dot( A[k,:],P ) + A[k,k]*P[k] ) / A[k,k]
        
    if la.norm(P-X) < epsilon:
        print('Se alcanzo la tolerancia')
        cortar = 1
        break #para salir del for interno
        
    P = X.copy() #actualizacion de la solucion
    if cortar: break #para salir del primer for
    print(X)