%Sea h(x)=x*sin(x). Hallar el valor de x en el intervalo [0,2] donde la
%funcion toma el valor de h(x)=1
function [zero,valor] = biseccion(f,a,b,n)
f=inline(f);
for i=1:n
    c = (a+b)/2;
    if (f(c)==0)
        break
    elseif (f(a)*f(c)<0)
        b = c;
    else
        a = c;
    end
end
zero=c;
valor=f(zero);