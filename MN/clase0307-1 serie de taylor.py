import numpy as np
import matplotlib.pyplot as plt


### Polinomios de Taylor de orden 1 a 4

P1 = lambda x: 1 + x
P2 = lambda x: P1(x) + x**2/2
P3 = lambda x: P2(x) + x**3/6
P4 = lambda x: P3(x) + x**4/24
Y = lambda x: np.exp(x)

### Grafica en el intervalo [a,b]
a = 0
b = 5
x = np.linspace(a,b,50) #X es un array de 50 elementos desde 0 hasta 2

Y1 = P1(x)
Y2 = P2(x)
Y3 = P3(x)
Y4 = P4(x)
Ye = Y(x)


plt.plot(x,Y1,label = 'Y1')
plt.plot(x,Y2,label = 'Y2')
plt.plot(x,Y3,label = 'Y3')
plt.plot(x,Y4,label = 'Y4')
plt.plot(x,Ye,label = 'Ye')
plt.legend()
plt.show()