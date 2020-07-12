''' METODO DE LA SECANTE PARA ECUACIONES NO LINEALES '''
import numpy as np

def secante(F,P0,P1,epsilon,iter_max):
    f = lambda x: eval(F)
    p = np.array( [ P0,P1 ] , dtype = float)

    for i in range(0,iter_max):
        p = np.append( p, ( ( -f( p[i] )*(p[i+1] - p[i]) )/( f( p[i+1] ) - f( p[i] ) )  + p[i] ) )

         if ( abs( f( p[i] ) ) < epsilon and abs( p[i] - p[i-1] ) < epsilon ) or ( f( p[i] ) < epsilon and abs( p[i] - p[i-1] )/abs( p[i] + p[i-1] ) < epsilon ):
            print('se llego a la precision')
            break
    return p,f( p[i+1] ),i+1

print( secante( 'x*np.sin(x) - 1',1,2,1e-10,50 ) )