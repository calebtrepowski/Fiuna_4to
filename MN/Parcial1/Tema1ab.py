import numpy as np
import matplotlib.pyplot as plt


X = np.array([-1, 0, 1, 2, 3, 4, 5, 6 ,7 ,11, 14, 17, 21, 23, 25, 26],dtype=float)
Y = np.array([-1, 1, 9, 1, 3, -1, 2, 3, 7, 1, 2, 3, 1, -1, 12, 11], dtype=float)

N = len(X)
pol_int = 0

#iteracion para la sumatoria
for i in range(0,N):
  """ print("x = ",X[i])
  print("y = ",Y[i]) """
  pol = Y[i]
  for j in range(0,N):
    if j != i:
      pol = np.convolve( pol,np.poly([X[j]])/(X[i]-X[j]) )
    """ print("pol = ",pol) """
  pol_int += pol
  """ print("pol_int = ", pol_int) """

print("Verificacion: ", np.polyval(pol_int,X))
print("El polinomio interpolador es: ",pol_int)

