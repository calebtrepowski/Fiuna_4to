''' METODO DE NEWTON RAPHSON PARA ECUACIONES NO LINEALES '''

import numpy as np

def newton_raphson(F,F1,P0,epsilon,iter_max):
    f = lambda x: eval(F)
    f1 = lambda x: eval(F1)
    p = np.array( [P0] , dtype = float )

    for i in range(0,iter_max):
        p = np.append( p , p[i] - f( p[i] )/f1( p[i] ) )

        if ( abs( f( p[i] ) ) < epsilon and abs( p[i] - p[i-1] ) < epsilon ) or ( f( p[i] ) < epsilon and abs( p[i] - p[i-1] )/abs( p[i] + p[i-1] ) < epsilon ):
            print('se llego a la precision')
            break
    return p,f( p[i+1] ),i+1

print( newton_raphson( 'x*np.sin(x) - 1','np.sin(x) + x*np.cos(x)',1.5,1e-10,50 ) )