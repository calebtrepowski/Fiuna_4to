import numpy as np
import matplotlib.pyplot as plt
import numpy.linalg as la

### Datos
X = np.array( [-1,0,1], dtype = float ) ## es conveniente que este ordenado
Y = np.array( [3,2,8], dtype = float ) ## cada ordenada debe corresponder a su abcisa
N = len(X)

### Construccion de la matriz de VDM

VDM = np.zeros( (N,N) )

for i in range(0,N):
    VDM[:,i] = X**(N-i-1)

### Resolvemos el sistema de ecuaciones

coef = np.dot( la.inv(VDM),Y )
x = np.linspace(-2,2,50)
y = np.polyval( coef,x ) ##polyval evalua vectores en polinomios, y devuelve otro vector
plt.plot(x,y)

plt.scatter(X,Y) ## scatter sirve para plotear puntos
plt.grid()
plt.show()