import numpy as np
import matplotlib.pyplot as plt

p = lambda t: 2*t / (1+t*t) 
q = lambda t: -2 / (1+t*t)
r = lambda t: 1

a=0
b=4
alfa = 1.25
beta = -0.95
n=20 #4 intervalos 
t = np.linspace(a,b,n) #eje de las abscisas
h = (b-a)/(n-1)
#n cantidad de subintervalos
#hay n-2 = 3 puntos internos lo que nos genera un sistema de 3*3 lineal

#el sistema es tridiagonal para el caso de contorno dado
#la diag principal es 2 + h^2 * qi
#la subdiagonal -h/2 *  Pi -1
#la superdiagonal h/2 * Pi -1
#B es -h^2 * Ri y para los extremos se suma e0 y en respectivamente
dp = np.zeros(n-2)
sup = np.zeros(n-3)
sub = np.zeros(n-3)
B = np.zeros(n-2)
for k in range(1,n-1):
    #diagonal principal
    dp[k-1] = 2+h**2*q(t[k])
    #superdiagonal
    if k != n-2:
        sup[k-1] = h/2 * p(t[k])-1
    #subdiagonal
        #print(sup[k-1])
    if k!=1:
        sub[k-2] = -h/2 * p(t[k])-1

    B[k-1] = -h**2*r(t[k])
print(len(dp),len(sup),len(sub))
A = np.diag(dp)+np.diag(sup,1) + np.diag(sub,-1)
e0 = ((h/2) * p(t[1])+1)*alfa
eN = ((-h/2)*p(t[n-2])+1)*beta

#print(e0)
#print(eN)
B[0] += e0
B[n-3] += +eN
print(A)
print(B)
X = np.dot(np.linalg.inv(A),B)
X = np.append(X,beta)
X = np.insert(X,0,alfa)
print(X)
plt.plot(t,X)
plt.show()
#print(sup)