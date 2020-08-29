format long
clear all
clc

f = @(x)(sin(x));
x = pi/3;
h=0.01;
D0 = @(h)( ( f(x+h) - f(x-h) )/(2*h) );

D1 = @(h)( (4*D0(h) - D0(2*h))/3 );

D2 = ( 16*D1(h) - D1(2*h) )/15