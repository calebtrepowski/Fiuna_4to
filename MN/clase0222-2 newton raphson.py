''' METODO DE NEWTON - RAPHSON '''
### LIBRERIAS
import numpy as np
#import matplotlib.pyplot as plt

### DATOS
f = lambda x: x*np.sin(x) - 1
df = lambda x: np.sin(x) + x*np.cos(x)
p0 = 1
iter_max = 50
epsilon = 0.00001

p = np.array([p0])
aux1 = p0

''' Para graficar
x = np.linspace(0,30,1000)
y = f(x)
plt.plot(x,y)
plt.show()
plt.grid()
'''

for i in range(0,iter_max):
    aux = p[i] - ( f(p[i]) / df(p[i]) )
    p = np.append(p,aux)
    
    if abs( f(p[i]) )<epsilon and abs( p[i+1] - p[i] )/abs( p[i+1] )<epsilon:
        break
    
print(p,i)

''' TAREA: PROGRAMAR LOS 5 METODOS DE HALLAR RAICES METIENDO TODOS LOS VECTORES RESULTADOS EN UNA MATRIZ '''