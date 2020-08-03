class Sensores:
  def __init__(self,precio,corrienteMax,tension):
    self.precio = precio
    self.corrienteMax = corrienteMax
    self.tension = tension
  
  def getprecio(self):
    return self.precio
  def setprecio(self, precio):
    self.precio = precio
  
  def getcorrienteMax(self):
    return self.corrienteMax
  def setcorrienteMax(self, corrienteMax):
    self.corrienteMax = corrienteMax
  
  def gettension(self):
    return self.tension
  def settension(self, tension):
    self.tension = tension
  
  def toString(self):
    return "\nPrecio: " + str(self.precio) + \
      "\nCorriente Maxima: " + str(self.corrienteMax) + \
      "\nTension: " + str(self.tension)

class SensorCapacitivo(Sensores):
  def __init__(self,precio,corrienteMax,tension,capacitancia):
    Sensores.__init__(self,precio,corrienteMax,tension)
    self.capacitancia = capacitancia

  def getcapacitancia(self):
    return self.capacitancia
  def setcapacitancia(self, capacitancia):
    self.capacitancia = capacitancia
  
  def toString(self):
    return Sensores.toString(self) + "\nCapacitancia: " +\
      str(self.capacitancia)

s = SensorCapacitivo(12500,5,220,0.3)

print(s.getcapacitancia(),s.getcorrienteMax(),s.gettension(),\
  s.getprecio())
s.setprecio(20000)
s.setcapacitancia(0.5)
print(s.toString())