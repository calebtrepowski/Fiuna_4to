from clases import *
lista = []
try:
  lista.append(Electrodomestico(125000,"Heladera"))
  lista.append(Celular(600000,"Samsung","S8"))
  lista.append(Television(150000,"Sony",45))
  for i in lista:
    print(i.toString())

  while len(lista):
    lista.pop()
    
except TypeError:
  print("El precio debe ser entero y el nombre string")