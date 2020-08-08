#METODO DE FALSA POSICION

### LIBRERIAS
import numpy as np

### DATOS
f = lambda x: x*np.sin(x)-1
a=0
b=2
c = np.array([])
epsilon=float(input('Precision: '))
iteracion_max=int(input('Cantidad maxima de iteraciones: '))

### VERIFICAR EL TEOREMA DE BOLZANO EN EL INTERVALO [a,b]
if f(a)*f(b)>0:
    raise NameError('No se cumple el teorema de Bolzano en el intervalo')      

for i in range(iteracion_max):
    #b-(f(b)*(b-a))/(f(b)-f(a))
    c=np.append(c,b-(f(b)*(b-a))/(f(b)-f(a)))
    if i>=1:
        if abs(f(c[i]))<epsilon and abs((c[i]-c[i-1])/c[i])<epsilon:
            print('Precision alcanzada, numero de iteraciones: ',i)
            break
        
        if f(c[i])==0:
            break
        
        elif f(a)*f(c[i])<0:
            b=c[i]
        
        else:
            a=c[i]

print('El cero está en x=',c[i],'y el valor es',f(c[i]))
print(c)