format long
clear all
clc

f = @(x)(sin(x));
x = pi/3;
df = @(h)( ( f(x+h) - f(x) ) / h );

df2 = @(h)( ( f(x+h) - f(x-h) )/(2*h) );

%df4 falta
h=0.1;
res=zeros(20,2);
for k =1:20
    d = df2(h);
    h = h/10;
    res(k, : ) = [k d];
end
[value, pos] = min ( abs( res(:,2)- cos(x) ) )
res(pos,2)