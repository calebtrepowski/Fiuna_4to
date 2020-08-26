from clases import *
lista = []


def main():
  lista.append(Electrodomestico(125000,"Heladera"))
  lista.append(Celular(600000,"Samsung","S8"))
  lista.append(Television(150000,"Sony",45))
  for i in lista:
    print(i.toString())

  while len(lista):
    lista.pop()
    
contadorFallas = 0
while True:
  nombre = input("Introduzca nombre: ")
  contrasenha = input("Introduzca contrasenha: ")
  try:
    if nombre=="Juan" and contrasenha == "alo":
      print("Acceso Correcto")
      main()
    else:
      print("Datos no reconocidos, vuelva a introducir: ")
      contadorFallas += 1
      print("Falla numero: ",contadorFallas)
      if contadorFallas==3:
        print("Ha fallado 3 veces, acceso cancelado")
        break
  except TypeError:
    print("El precio debe ser entero y el nombre string")