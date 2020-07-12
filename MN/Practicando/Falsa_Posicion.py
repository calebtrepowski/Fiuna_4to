''' METODO DE FALSA POSICION PARA ECUACIONES NO LINEALES '''

import numpy as np

def falsa_posicion(F,a,b,epsilon,iter_max):
    f = lambda x: eval(F)

    if f(a) * f(b) > 0:
        raise NameError('La funcion no cumple el teorema de Bolzano en el intervalo dado')

    c = np.array( [ ( ( ( b-a )*( -f(a) ) ) / ( f(b) - f(a) ) ) + a ] , dtype = float )

    for i in range(0,iter_max):
        if f(a) * f(b) == 0:
            if f(a) == 0:
                c = np.append( c,a )
                break
            elif f(b) == 0:
                c = np.append( c,b )
                break
        if f( c[i] ) == 0:
            break
        if f(a) * f( c[i] ) < 0:
            b = c[i]
            c = np.append( c, ( ( ( c[i]-a )*( -f(a) ) ) / ( f( c[i] ) - f(a) ) ) + a  )
        elif f(b) * f( c[i] ) < 0:
            a = c[i]
            c = np.append( c, ( ( ( b-c[i] )*( -f( c[i] ) ) ) / ( f(b) - f( c[i] ) ) ) + a )
        if ( abs( f( c[i] ) ) < epsilon and abs( c[i] - c[i-1] ) < epsilon ) or ( f( c[i] ) < epsilon and abs( c[i] - c[i-1] )/abs( c[i] + c[i-1] ) < epsilon ):
            print('se llego a la precision')
            break
    return c,f( c[i] ),i+1

#print( falsa_posicion( 'x*np.sin(x) - 1',0,2,1e-10,50 ) )
print( falsa_posicion( 'np.sin(np.cos(x**3))',1.0,1.2,1e-6,50 ) )