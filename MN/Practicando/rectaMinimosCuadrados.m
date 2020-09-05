%%% Recta de regresion en minimos cuadrados %%%
% Datos %
%x: estaturas (in)
x = [70 63 72 60 66 70 74 65 62 67 65 68];
%y: peso (lb)
y = [155 150 180 135 156 168 178 160 132 145 139 152];

% Diagrama de dispersion %
hold off
plot(x,y,'o')
axis([min(x)-10 max(x)+10 min(y)-10 max(y)+10 ]);
hold on

% Ecuaciones %
A = zeros(2,2);
A(1,1) = sum(x.^2);
A(1,2) = sum(x);
A(2,1) = sum(x);
A(2,2) = length(x);

B = [sum(x.*y) ; sum(y)];

sol = inv(A)*B;

% y = ax + b %
a = sol(1);
b = sol(2);

recta = @(x) a.*x + b;
disp("La recta es y=ax+b, donde ")
disp("a = "),disp(a), disp("b = "),disp(b)
xx = min(x):0.01:max(x);
yy = recta(xx);
plot(xx,yy)

% Calculo del coef de determinacion %
SSres = sum((recta(x)-y).^2);
SStot = sum((mean(y)-y).^2);
R2 = 1 - SSres/SStot