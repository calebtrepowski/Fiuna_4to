class Pila:
  def __init__(self):
    self.lista = []
  def agregarElemento(self,elem):
    self.lista.append(elem)
  def eliminarElemento(self):
    try:
      if len(self.lista) == 0:
        raise IndexError
      else:
        return self.lista.pop()
    except IndexError:
      print("Error: la pila esta vacia")
  def verificar(self):
    if len(self.lista) == 0:
      return True
    else: return False
  def __str__(self):
    return str(self.lista)

class Cola:
  def __init__(self):
    self.lista = []
  def agregarElemento(self,elem):
    self.lista.append(elem)
  def eliminarElemento(self):
    try:
      if len(self.lista) == 0:
        raise IndexError
      else:
        return self.lista.pop(0)
    except IndexError:
      print("Error: la cola esta vacia")
  def verificar(self):
    if len(self.lista) == 0:
      return True
    else: return False
  def __str__(self):
    return str(self.lista)
    