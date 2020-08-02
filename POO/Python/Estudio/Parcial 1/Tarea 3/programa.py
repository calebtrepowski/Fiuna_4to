class Herramienta():
  def __init__(self, _nombre, _numeroCaja):
    self.nombre = _nombre
    self.numeroCaja = _numeroCaja
  
  def getNombre(self):
    return self.nombre
  def setNombre(self, nombre):
    self.nombre = nombre
  def getnumeroCaja(self):
    return self.numeroCaja
  def setnumeroCaja(self, numeroCaja):
    self.numeroCaja = numeroCaja
  
  def toString(self):
    return "\nNombre: " + str(self.nombre) +\
      "\nNumero de Caja: " + self.numeroCaja
  
class HerramientaCorte(Herramienta):
  def __init__(self, nombre,numeroCaja ,tipoFilo):
    Herramienta.__init__(self, nombre, numeroCaja)
    self.tipoFilo = tipoFilo
  
  def gettipoFilo(self):
    return self.tipoFilo
  def settipoFilo(self, tipoFilo):
    self.tipoFilo = tipoFilo
  
  def toString(self):
    return Herramienta.toString(self) + '\nTipo de filo: '\
      + self.tipoFilo

class HerramientaGolpe(Herramienta):
  def __init__(self, nombre, numeroCaja, tipoGolpe):
    Herramienta.__init__(self, nombre, numeroCaja)
    self.tipoGolpe = tipoGolpe
  
  def gettipoGolpe(self):
    return self.tipoGolpe
  def settipoGolpe(self, tipoGolpe):
    self.tipoGolpe = tipoGolpe
  
  def toString(self):
    return Herramienta.toString(self) + '\nTipo de Golpe: '\
      + self.tipoGolpe

class HerramientaCorteyGolpe(HerramientaCorte,\
  HerramientaGolpe):
  def __init__(self, nombre, numeroCaja, tipoFilo, tipoGolpe):
    HerramientaCorte.__init__(self, nombre, numeroCaja,\
      tipoFilo)
    HerramientaGolpe.__init__(self, nombre, numeroCaja,\
      tipoGolpe)
  def toString(self):
    return HerramientaCorte.toString(self) + '\nTipo de Golpe: '\
      + self.tipoGolpe