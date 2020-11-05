class Calzado():
  def __init__(self,marca):
    self.marca = marca
  def getMarca(self):
    return self.marca
  def setMarca(self, marca):
    self.marca = marca
  def __str__(self):
    return f"Calzado\nMarca: {self.marca}\n"

class CalzadoDeportivo(Calzado):
  def __init__(self,marca,tipoDeporte):
    Calzado.__init__(self, marca)
    self.tipoDeporte = tipoDeporte
  
  def getTipoDeporte(self):
    return self.tipoDeporte
  def setTipoDeport(self, tipoDeporte):
    self.tipoDeporte = tipoDeporte

  def __str__(self):
    return f"Calzado Deportivo\n{Calzado.__str__(self)}\nTipo de Deporte: {self.tipoDeporte}\n"

class CalzadoDeVestir(Calzado):
  def __init__(self,marca,tipoDeSalida):
    Calzado.__init__(self, marca)
    self.tipoDeSalida = tipoDeSalida
  def getTipoDeSalida(self):
    return self.tipoDeSalida
  def setTipoDeSalida(self, tipoDeSalida):
    self.tipoDeSalida = tipoDeSalida
    
  def __str__(self):
    return f"Calzado de Salida\n{Calzado.__str__(self)}\nTipo de Salida: {self.tipoDeSalida}\n"