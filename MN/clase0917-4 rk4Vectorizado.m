% X(t) = [ x(t); y(t) ]
% F(t) = [ f(t,x,y); g(t,x,y) ]
% X(t0) = [ x(t0); y(t0) ]
clear
clc

tic
t0 = 0;
tf = 2;
h = 0.00001;
t = t0:h:tf;

%% Datos
F = @(t, X)( [ X(1)+2*X(2) ; 3*X(1)+2*X(2) ] );
X(:,1) = [ 6;4 ];
PX(:,1) = [ 6;4 ];

%% Metodo de RK4 Vectorizado
for k = 1:length(t)-1
	F1 = F( t(k),X(:,k) )	;
	F2 = F( t(k) + h/2, X(:,k) + (h/2)*F1 );
	F3 = F( t(k) + h/2, X(:,k) + (h/2)*F2 );
	F4 = F( t(k) + h, X(:,k) + h*F3);
	
	X(:,k+1) = X(:,k) + (h/6) * ( F1 + 2*F2 + 2*F3 + F4 );
end

%% Solucion real
tt = t0:1e-3:tf;
Xreal = (4*exp(4*tt) + 2*exp(-tt));
Yreal = (6*exp(4*tt) - 2*exp(-tt));

%% Graficos
figure(1)
subplot(1,2,1)
plot( t,X(1,:),'r', tt,Xreal, 'k' )
title('x(t)')
subplot(1,2,2)
plot( t,X(2,:),'r', tt,Yreal, 'k' )
title('y(t)')
toc