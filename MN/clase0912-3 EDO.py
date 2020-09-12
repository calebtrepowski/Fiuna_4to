import numpy as np
import matplotlib.pyplot as plt

#y'(t) = ty
df = lambda t,y: t*y
g = lambda t: np.exp(t**2/2)
a = 0
b = 10
M = 100 #subintervalos
N = M+1 #puntos

h = (b-a)/M

t = np.linspace(a,b,M+1)
#Euler
ye = np.zeros(N)
ye[0] = 1
#Heun
yh = np.zeros(N)
yh[0] = 1
p = np.zeros(N)
p[0] = 1
#Runge-Kutta
yr = np.zeros(N)
yr[0] = 1

for k in range(0,N-1):
  #Euler
  ye[k+1] = ye[k] + h*df(t[k],ye[k])
  #Heun
  p[k+1] = yh[k] + h*df(t[k],yh[k])
  yh[k+1] = yh[k] + (h/2)*( df( t[k],yh[k]) +df(t[k+1],p[k+1]))

  #Runge-Kutta de orden 4
  f1 = df(t[k],yr[k])
  f2 = df(t[k] + h/2,yr[k]+h/2*f1)
  f3 = df(t[k] + h/2,yr[k]+h/2*f2)
  f4 = df(t[k] + h,yr[k] + h*f3)
  yr[k+1] = yr[k] + (h/6)*(f1+2*f2+2*f3+f4)


taux = np.linspace(a,b,100)


plt.plot(taux,g(taux))
plt.plot(t,ye)
plt.plot(t,yh)
plt.plot(t,yr)
plt.legend(['Analitica','Euler','Heun','Runge'])
plt.show()