import numpy as np

f = lambda x: np.exp(x)
a = 0
b = 1



## Trapecio ##
h = b-a
x = np.linspace(a,b+a,2)
I = (h/2)*( f(x[0]) + f(x[1]) )
print(I)
## Simpson ##
h = (b-a)/2
x = np.linspace(a,b,3)
I = (h/3)*( f(x[0]) + 4*f(x[1]) + f(x[2]) )
print(I)
## Simpson 3/8 ##
h = (b-a)/3
x = np.linspace(a,b,4)
I = (3*h/8)*( f(x[0]) + 3*f(x[1]) + 3*f(x[2]) + f(x[3]) )
print(I)

## Boole ##
h = (b-a)/4
x = np.linspace(a,b,5)
I = (2*h/45)*( 7*f(x[0]) + 32*f(x[1]) + 12*f(x[2]) + 32*f(x[3]) + 7*f(x[4]) )
print(I)