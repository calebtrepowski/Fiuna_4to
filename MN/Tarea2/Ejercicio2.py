'''
********************************************************
========== PROGRAMA HECHO EN Python v3.8.1 ============
----- numpy v1.18.1
Metodos Numericos, FIUNA, 4to semestre Ing Mecatronica
Alumno: CALEB TREPOWSKI CASTILLO
********************************************************
'''

''' Tarea 2, Ejercicio 2
Elabore una funcion en Python que resuelva un sistema de
ecuaciones lineales por el metodo de Gauss-Seidel.

Dicho programa debe inicialmente verificar la convergencia.
En caso de poder asegurar la convergencia, se debe imprimir
en pantalla el mensaje “Se garantiza la convergencia del
sistema”, luego proceder al calculo de la solucion y mostrarla
en pantalla. En caso contrario, se debe imprimir el mensaje
“No se puede garantizar la convergencia del sistema” y el
programa debe finalizar.

Implemente tambien en su programa un criterio de parada (que
no sea, por supuesto, por el numero de iteraciones).
'''
import numpy as np
import numpy.linalg as la

iter_max = 50
epsilon = 1e-5
cortar = False

#Reemplazar A y b por las matrices de coeficientes y
#y terminos independientes respectivamente
A = np.array([[1,2,3],[5,7,8],[13,17,15]],dtype=float)
b = np.transpose(np.array([[37,29,12]],dtype=float))

m = np.size(A,0)
n = np.size(b,1)
#n:numero de columnas de b

P = np.transpose(np.array([[5,7,9]],dtype=float))
X = P.copy()
#P:chute inicial
#X:solucion que ira mejorando con las iteraciones

#Verificacion de convergencia
for i in range(0,m):
  if abs(A[i,i]) < ( np.sum( np.absolute(A[i,:]) )\
    - abs(A[i,i]) ):
    cortar = True
    raise NameError('No se puede garantizar la convergencia\
      del sistema')

if not(cortar):
  print("Se garantiza la convergencia del sistema")
  
  #i:numero de la iteracion actual
  for i in range(0,iter_max):
    for j in range(0,m):
      #j:numero de incognita actual
      pos = np.array( range(0,n) )
      #pos: vector con los indices de la fila/incognita actual
      pos = np.delete(pos,j)
      #eliminamos el indice de la incognita actual de pos
      X[j] = (b[j] - np.dot( A[j,pos],P[pos] )) / (A[j,j])
      aux = P.copy()
      #aux: copia de P para comparar la diferencia entre
      #iteraciones consecutivas
      P[j] = X[j]
      #actualizamos la solucion con el mejor punto hasta ahora
    if la.norm(aux-X) < epsilon:
      #criterio de parada: norma usual de la diferencia entre
      #vectores
      print('Se alcanzo la precision.')
      break
  print(X)
