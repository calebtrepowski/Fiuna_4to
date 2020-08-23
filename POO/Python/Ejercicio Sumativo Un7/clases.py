class Electrodomestico():
  def __init__(self, precio, nombre):
    self.precio = precio
    self.nombre = nombre
  def getprecio(self):
    return self.precio
  def setprecio(self, precio):
    self.precio = precio
  def getnombre(self):
    return self.nombre
  def setnombre(self, nombre):
    self.nombre = nombre
  def toString(self):
    return "\nPrecio: "\
      + str(self.precio) + "\nNombre: " + self.nombre

class Celular(Electrodomestico):
  def __init__(self, precio, nombre, modelo):
    Electrodomestico.__init__(self, precio, nombre)
    self.modelo = modelo
  def getmodelo(self):
    return self.modelo
  def setmodelo(self, modelo):
    self.modelo = modelo
  def toString(self):
    return Electrodomestico.toString(self) + "\nModelo: "\
      + self.modelo

class Television(Electrodomestico):
  def __init__(self,precio, nombre, tamanoPulg):
    Electrodomestico.__init__(self, precio, nombre)
    self.tamanoPulg = tamanoPulg
  def gettamanoPulg(self):
    return self.tamanoPulg
  def settamanoPulg(self, tamanoPulg):
    self.tamanoPulg = tamanoPulg
  def toString(self):
    return Electrodomestico.toString(self) +\
      "\nTamano Pulgadas: " + str(self.tamanoPulg)