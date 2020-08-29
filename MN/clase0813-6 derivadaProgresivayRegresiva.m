clear all
clc

f = @(x)(sin(x));
x = pi/3;
%Primera derivada O(h^2) progresiva
dfp = @(h)( ( -f(x+2*h) +4*f(x+h) -3*f(x) ) / ( 2*h ) );
%Primera derivada O(h^2) regresiva
dfr = @(h)( ( f(x+2*h) -4*f(x+h) +3*f(x) ) / ( 2*h ) );
h=0.1;
res=zeros(20,2);
for k =1:20
    d = dfp(h);
    h=h/10;
    res(k, : ) = [k d];
end
res