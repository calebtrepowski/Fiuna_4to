import numpy as np
import numpy.linalg as la

### DATOS
A = np.array( [ [3,-1.5,2],[-1,5,2],[4,-4.5,13] ] , dtype = float )
B = np.array( [ [1],[3],[1] ] , dtype = float )
N = len(B)
P = np.array([0,0,0] , dtype = float)

epsilon = 1e-4
iter_max = 500

X = np.zeros(N)
cortar = 0

for i in range(iter_max):
  for j in range(0,N):
    pos = np.array( range(0,N) )
    pos = np.delete(pos,j)
    X[j] = ( B[j] - np.dot( A[j,pos],P[pos] ) ) / A[j,j]
    aux = P.copy()
    P[j] = X[j]

    if la.norm(aux-X) < epsilon:
      print('Se alcanzo la tolerancia')
      cortar = 1
      break
  if cortar:
    break
print(X)
