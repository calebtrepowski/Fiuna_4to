import numpy as np
import numpy.linalg as la

def Vandermonde(X,Y):
  N = len(X)
  VDM = np.zeros( (N,N) )

  for i in range(0,N):
    VDM[:,i] = X**(N-i-1)
  
  coef = np.dot( la.inv(VDM),Y )
  
  return coef, VDM
  
X = np.array( [2,3,4,5,6], dtype = float )
Y = np.array( [2,6,5,5,6], dtype = float )


[coefi, vander] = Vandermonde(X,Y)
print(f"El polinomio resultante es: {coefi}")
print(f"La matriz de Vandermonde es:\n{vander}")