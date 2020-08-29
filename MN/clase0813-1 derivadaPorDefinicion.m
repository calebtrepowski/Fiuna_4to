format long
clear all
clc

f = @(x)(sin(x));
x = pi/3;
df = @(h)( ( f(x+h) - f(x) ) / h );
%df = @(f, x , h)( ( f(x+h) - f(x) ) / h ); para poder reutilizar
h=0.1;
res=zeros(20,2);
for k =1:20
    d = df(h);
    h=h/10;
    res(k, : ) = [k d];
end
[value, pos] = min ( abs( res(:,2)- cos(x) ) )