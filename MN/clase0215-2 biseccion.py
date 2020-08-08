#METODO DE BISECCION

### LIBRERIAS
import numpy as np

### DATOS
f = lambda x: x*np.sin(x)-1
a=0
b=2
epsilon=float(input('Precision= '))
bisecciones=int(np.ceil((np.log(b-a)-np.log(epsilon))/np.log(2)))

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