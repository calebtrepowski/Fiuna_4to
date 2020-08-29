function R = romberg(f, a, b, N)
%f: funcion a integrar
%a,b: limites del intervalo
%N: cantidad de iteraciones
f = inline(f);
R = zeros(N);
h = b-a;
R(1,1) = (h/2)*( f(a) +f(b) );

for J=1:N-1
    h=h/2;
    x=a:h:b;
    %Columna 1: Recursividad Trapecio
    R(J+1,1) = R(J,1)/2 + h*sum( f(x(2:2:end)) );
    for K=1:J
        R(J+1,K+1) = ( 4^K*(R(J+1,K)) - R(J,K) ) / ( 4^K-1 );
    end
end
end
    