''' METODO DEL PUNTO FIJO PARA ECUACIONES NO LINEALES '''

import numpy as np

def punto_fijo(f,a,b,epsilon,iter_max):
    F = lambda x: eval(f)
    G = lambda x:eval()
    G = lambda x: eval('x - (' + f + ')')

    p0 = ( a+b ) / 2

    p = np.array( [p0] )

    for i in range(0,iter_max):
        p = np.append( p,G(p[i]) )
        if ( abs( F( p[i] ) ) < epsilon and abs( p[i] - p[i-1] ) < epsilon ) or ( F( p[i] ) < epsilon and abs( p[i] - p[i-1] )/abs( p[i] + p[i-1] ) < epsilon ):
            print('se llego a la precision')
            break
    return p,F( p[i+1] ),i+1
    #return p[i+1]

print( punto_fijo('x*np.sin(x)-1',0,2,50,1e-10) )