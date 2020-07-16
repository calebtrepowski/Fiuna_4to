%Demuestre que la siguiente formula de iteracion nos permite
%hallar la raiz cubica de un numero real N cualquiera:
%pk+1 =(2*pk + N/pk^2)/3
%Posteriormente, elabore un programa en MATLAB que halle la
%raiz cubica de cualquier numero real N con la formula
%propuesta anteriormente.
format long
N = 1; %reemplazar N por el numero del que se desea
       %obtener la raiz cubica
iter_max = 50;
err = 1e-5;

p0 = N/3;
p = [p0];

for i = 1:iter_max
  p(i+1) = (2*p(i) + N/(p(i)^2))/3;
  if abs(  (p(i+1)-p(i))/p(i+1)  ) < err || abs(  p(i+1)-p(i)  ) < err
    break
  end
end

p(length(p))
i