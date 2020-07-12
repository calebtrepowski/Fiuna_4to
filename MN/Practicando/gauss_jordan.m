function X = gauss_jordan(A,b)
  ampliada = [A b];
  n = length(A);
  X = zeros(n,1);
  
  for i = 1:1:n-1
  if ampliada(i,i) == 0
    for j = i+1:1:n
      if ampliada(j,i) ~= 0
        %Intercambio de filas
        aux = ampliada(i,:);
        ampliada(i,:) = ampliada(j,:);
        ampliada(j,:) = aux;
      end
    end
  end
  
  if ampliada(n,n) == 0
      break
  end
  
  for k = i+1:1:n
      multiplicador = ampliada(k,i)/ampliada(i,i);
      ampliada(k,:) = ampliada(k,:) - multiplicador.*ampliada(i,:);
  end
end
if ampliada(n,n) == 0
    error('La matriz es singular')
end
for i = n:-1:1
    ampliada(i,:) = ampliada(i,:)/ampliada(i,i);
    for k = i-1:-1:1
        multiplicador = ampliada(k,i)/ampliada(i,i);
        ampliada(k,:) = ampliada(k,:) - multiplicador.*ampliada(i,:);
    end
end

A = ampliada(:,1:n);
b = ampliada(:,n+1);

for i = n:-1:1
  X(i,1) = b(i,1);
end

  %X = ampliada(n+1:2*n,:)*b;
end