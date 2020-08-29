format long
clear all
clc

f = @(x)(sin(x));
x = pi/3;
ddf = @(h)( ( f(x+h) - 2*f(x) + f(x-h) ) / h^2 );
h=0.1;
res=zeros(20,2);
for k =1:20
    d = ddf(h);
    h=h/10;
    res(k, : ) = [k d];
end
res