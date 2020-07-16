'''Resuelva la ecuacion pow(x,x)=100 a partir de una iteracion
de punto fijo
1.Convierta previamente la ecuacion a la forma x = g(x) para
su resolucion. Muestre su proceso.
2. Elabore un programa en Python que aplique una iteracion de
punto fijo sobre la forma obtenida en el item 1.
'''
import numpy as np
import matplotlib.pyplot as plt

f = lambda x: pow(x,x) - 100 #funcion de la que queremos
                             #hallar las raices
x = np.linspace(0.1,4,150)
y = f(x)
plt.plot(x,y)
plt.grid()
plt.show()

'se ve que cerca de x=3.5 hay un 0'

p0 = 3.5
iter_max = 50
error = 1e-5

g = lambda x: 2/np.log10(x) #funcion iterante
                            #hallada manualmente
p = np.array([p0])

for i in range(0,iter_max):
  p = np.append(p,g(p[i]))
  if abs(p[i]-p[i-1]) < error: #criterio del error absoluto
    break

print(p[i])