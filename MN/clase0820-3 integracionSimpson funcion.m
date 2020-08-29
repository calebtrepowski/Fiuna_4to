function A=simpson(f,a,b,M)
%f: funcion en cadena de caracteres
%a,b: limites del intervalo
%M:cantidad de sub intervalos (numero par)
f=inline(f,'x');
h=(b-a)/M;
x=a:h:b;
A=0;

for k=1:2:M
    A = A +  (f( x(k) ) + 4*f( x(k+1) ) + f( x(k+2) ) )* h/3; 
end