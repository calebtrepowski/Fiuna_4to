''' NEWTON RAPHSON COMO FUCION '''

def newton_raphson(f,df,p0,iter_max,epsilon):
    p = np.array([p0])
    
    for i in range(0,iter_max):
        aux = p[i] - ( f(p[i]) / df(p[i]) )
        p = np.append(p,aux)
        
        if abs( f(p[i]) )<epsilon and abs( p[i+1] - p[i] )/abs( p[i+1] )<epsilon:
            break
        
    return p
    