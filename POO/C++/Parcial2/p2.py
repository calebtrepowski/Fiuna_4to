try:
  texto = input("Introduzca por teclado el dato: ")
  if texto[-4:] == ".exe":
    raise ValueError
except:
  print("Este archivo puede ser peligroso para el sistema.")