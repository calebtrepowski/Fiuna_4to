''' METODO DE BISECCION PARA ECUACIONES NO LINEALES '''
import numpy as np

def biseccion(F,a,b,epsilon):
    f = lambda x: eval(F)
    c = np.array( [ (a+b)/2 ] , dtype = float )
    
    cant_iteraciones = int( np.ceil( (np.log( (b-a)/epsilon )) / ( np.log(2) ) ) )
    
    if f(a) * f(b) > 0:
        raise NameError('La funcion no cumple el teorema de Bolzano en el intervalo dado')

    for i in range(0,cant_iteraciones):
        
        if f(a) * f(b) == 0:
            if f(a) == 0:
                c = np.append( c,a )
                break
            elif f(b) == 0:
                c = np.append( c,b )
                break
        
        if f( c[i] ) == 0:
            break

        elif f(a) * f( c[i] ) < 0:
            b = c[i]
            c = np.append( c, (a+b)/2 )
        elif f( c[i] ) * f(b) < 0:
            a = c[i]
            c = np.append( c, (a+b)/2 )
    
    return c,f( c[i+1] ),cant_iteraciones

print( biseccion( 'x*np.sin(x)-1',0,2,1e-10 ) )