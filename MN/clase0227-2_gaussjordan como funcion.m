function x = gaussjordan(A,B)
n = length(A);
I = eye(n);
G = [A I];


%%% ESCALONAMIENTO DESDE ARRIBA %%%
for i = 1:n %filas pivot
  for j = i+1:n %filas a cambiar
     mult = G(j,i)/G(i,i);
     G(j,:) = G(j,:) - mult*G(i,:);
   end
end

%%% ESCALONAMIENTO DESDE ABAJO %%%
for i = n:-1:1
  for j = i-1:-1:1
    mult = G(j,i)/G(i,i);
    G(j,:) = G(j,:) - mult*G(i,:);
  end
end

%%% CADA PIVOT RESTANTE SE VUELVE 1 %%%
for i = 1:n
  G(i,:) = G(i,:)/G(i,i);
end

x = G(:,n+1:end)*B;