function T = trapecioR(f, a, b, N)
%f: funcion a integrar
%a,b: limites del intervalo
%N: cantidad de iteraciones
f = inline(f);
h = b-a;
T=zeros(N,1);

T(1) = (h/2)*( f(a) +f(b) );

for J = 2:N
    h = h/2;
    x=a:h:b;
    T(J) = T(J-1)/2 + h* sum( f(x(2:2:end) ) ) ; 
end
end