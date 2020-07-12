function [x it] = jacobi(A,B,p0,iter_max,tol)
  %B y p0 deben ser vectores columna
  n = length(A);
  p = p0;
  x = zeros(n,1);
  contador = 0;
  
  for i = 1:iter_max
    contador = contador + 1;
    for j = 1:n %j: fila a operar
      x(j) = ( B(j) - A(j,[1:j-1 j+1:n])*p([1:j-1 j+1:n]) ) / A(j,j);
    end
    error = norm(x-p,2); %norm(vector,2) halla distancia entre 2 puntos (norma euclidiana)
    if error < tol
      it = i;
      break
    end
  end
end