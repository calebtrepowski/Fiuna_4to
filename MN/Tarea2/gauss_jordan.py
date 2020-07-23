import numpy as np

A = np.array([[1,2,3],[4,5,6],[7,8,9]])
n = len(A)
b = np.array([[1],[2],[3]])
ampliada = np.concatenate((A,b),axis=1)

print(ampliada[1,:])
for i in range(1,n):
  for j in range(i+1,n):
    mult = ampliada[j,j-1]/ampliada[j-1,j-1]
    ampliada[j,:] = ampliada[j,:] - mult*ampliada[j-1,:]

print(ampliada)