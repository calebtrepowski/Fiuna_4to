import clases

opciones = ["Cerrar el programa",
    "Crear 1 Calzado Deportivo y 1 Calzado de Vestir con datos genericos y cargar ambos en la lista",
    "Crear 1 Calzado Deportivo o de Salida introduciendo los datos",
    "Mostrar las listas de calzados en el sistema",
    "Exportar las listas de calzados",
    "Importar las listas de calzados"
]

print("Bienvenido a la tienda FIUNA-POO")

ListaCalzadosDeportivos = []
ListaCalzadosDeVestir = []

while(True):
    try:
        # este tira ValueError si no es un numero entero o es texto
        for i in range(len(opciones)):
          print(f"{i}: {opciones[i]}")
        opcion = int(input("\n*****\nSeleccione que quiere hacer: "))
        if opcion > 6 or opcion < 0:
            raise ValueError
        if opcion == 0:
          break
        elif opcion == 1:
          ListaCalzadosDeportivos.append(clases.CalzadoDeportivo("Nike","Futbol"))
          ListaCalzadosDeVestir.append(clases.CalzadoDeVestir("Adidas","Formal"))
        elif opcion == 2:
          while(True):
            try:
              tipo = int(input("1: Calzado Deportivo\n2: Calzado de Vestir\n3: Cancelar\n"))
              if tipo < 1 or tipo > 3:
                raise ValueError
              elif tipo == 1:
                marca = input("Marca: ")
                deporte = input("Tipo de Deporte: ")
                ListaCalzadosDeportivos.append(clases.CalzadoDeportivo(marca,deporte))
                break
              elif tipo == 2:
                marca = input("Marca: ")
                salida = input("Tipo de Salida: ")
                ListaCalzadosDeportivos.append(clases.CalzadoSalida(marca,salida))
                break
              else: break
            except ValueError:
              print("Por favor, introduzca un numero entero entre 1 y 3")
        elif opcion == 3:
          print("Calzados Deportivos:")
          for i in ListaCalzadosDeportivos:
            print(i)
          print("Calzados de Salida:")
          for i in ListaCalzadosDeVestir:
            print(i)
        elif opcion == 4:
          txt = ""
          for i in ListaCalzadosDeportivos:
            txt += str(i)
          try:
            f = open("ListaCalzados/DatosCalzDeport.txt", 'w')
            f.write(txt)
            f.close()
          except FileNotFoundError:
            print("Error al guardar deportes")
          txt = ""
          for i in ListaCalzadosDeVestir:
            txt += str(i)
          try:
            f = open("ListaCalzados/DatosCalzDeVestir.txt", 'w')
            f.write(txt)
            f.close()
          except FileNotFoundError:
            print("Error al guardar vestir")
        elif opcion == 5:
          try:
            f = open("ListaCalzados/DatosCalzDeport.txt", 'r')
            print(f.read())
            f.close()

            f = open("ListaCalzados/DatosCalzDeVestir.txt", 'r')
            print(f.read())
            f.close()
          except FileNotFoundError:
            print("Error al leer desde el archivo")

    except ValueError:
        print("Por favor, introduzca un numero entero entre 0 y 6")
