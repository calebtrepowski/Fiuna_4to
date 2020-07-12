''' METODO DE ITERACION DE PUNTO FIJO '''

## LIBRERIAS
import numpy as np
#import  matplotlib.pyplot as plt

## DATOS
#f = lambda x: x*np.sin(x) - 1 #funcion para hallar raices
f = lambda x: x**3 + 3*x - x + 1

#g = lambda x: x + ( x*np.sin(x) - 1 ) #funcion iterante
#g = lambda x: 1/np.sin(x)
g = lambda x: x - (x**3 + 3*x - x + 1)

a = 0
b = 2
p0 = 0 #por lo general conviene comenzar desde el medio del intervalo
iter_max = 50

p = np.array( [p0] )

for i in range( 0,iter_max ):
    aux = g( p[i] )
    p = np.append( p,aux )
    
print( p )