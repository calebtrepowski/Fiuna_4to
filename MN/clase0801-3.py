from numpy import *
from matplotlib.pyplot import *

##Datos

X=array([0,1,2,3,4],dtype=float)
Y=array([1.5,2.5,3.5,5.0,7.5],dtype=float)
Yn=log(Y)

N=len(X)

scatter(X,Y)

##Armar las ecuaciones normales

A=zeros([2,2])

A[0,0]=sum(X**2)
A[0,1]=sum(X)
A[1,0]=sum(X)
A[1,1]=N

B=zeros(2)

B[0]=sum(X*Yn)
B[1]=sum(Yn)

sol=dot(linalg.inv(A),B)
#sol[0]=A, sol[1]=B
#y=Ax+B


A=sol[0]
C=exp(sol[1])

f=lambda x: C*exp(A*x)

ejex=linspace(min(X),max(X),100)
ejey=f(ejex)

plot(ejex,ejey)
show()

Ym=mean(Y)

SSres=sum((f(X)-Y)**2)
SStot=sum((Ym-Y)**2)

Rcuad=1-SSres/SStot

print(Rcuad)