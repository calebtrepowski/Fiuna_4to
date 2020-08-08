Para graficar:
f = lambda x:x*np.sin(x)-1

x = np.linspace(0,2,50)
y = f(x)
plt.plot(x,y)
plt.grid()
plt.show() #en vscode
#cuando se quiere superponer graficas
plt.plot(x,Y1,label = 'Y1')
plt.plot(x,Y2,label = 'Y2')
plt.legend()

plt.scatter(X,Y) ## scatter sirve para plotear puntos



Para meter datos por teclado:
int(input()) o float(input())


Para agregar un valor a un vector:
vec = np.append(vec,val)


Tener en cuenta que:
x = la.inv(A)*B #no hace multiplcacion matricial
x = np.dot(la.inv(A),B) #se tiene que hacer así

#linalg
transpuesta = np.transpose(np.array([[7,8,9]]))
determinante = la.det(A)


la.norm(P-X) #norma euclidiana en numpy.linalg
En matlab:
error = norm(x-p_aux,2);
#norm(vector,2) halla distancia entre 2 puntos (norma euclidiana)
#octave toma 2 por defecto en el 2do parametro, pero igual no esta
#de mas especificar

#norm(vec,1) halla la norma ||x||*, que es la suma de los componentes
#de vec.

M = np.concatenate( (A,B), axis = 1 )
#axis = 0 concatena verticalmente, axis = 1 concatena horizontalmente

aux = M[k,:].copy()
### Si se hace la asignacion B = A en vectores, asigna la direccion de
#A a B, entonces cualquier modificacion a B tambien se hace a A,
#entonces se usa B = A.copy()

pos = np.delete(pos,k)
#para eliminar el elemento en la posicion k del vector pos

y = np.polyval( coef,x )
#polyval evalua vectores en polinomios, y devuelve otro vector


np.convolve(X,Y)
#devuelve el producto de los
#polinomios X e Y expresados como vectores
#en matlab convolve --> conv

en octave:
a = poly([1 1])
#retorna un polinomio con los coeficientes dados en el parametro
#poly([1 2]) = (x-1)(x-2) = [1 -3 2] = x**2 -3*x + 2