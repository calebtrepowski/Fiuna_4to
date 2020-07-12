#METODO DE BISECCION

### LIBRERIAS
from numpy import *

### DATOS
f = lambda x: x*sin(x)-1
a=0
b=2
epsilon=float(input('Precision= '))
bisecciones=int(ceil((log(b-a)-log(epsilon))/log(2)))

### VERIFICAR EL TEOREMA DE BOLZANO EN EL INTERVALO [a,b]
if f(a)*f(b)>0:
    raise NameError('No se cumple el teorema de Bolzano en el intervalo')      

for i in range(bisecciones):
    c=(a+b)/2
    
    if f(c)==0:
        break
    
    elif f(a)*f(c)<0:
        b=c
    
    else:
        a=c

print('El cero está en x=',c,'y el valor es',f(c))