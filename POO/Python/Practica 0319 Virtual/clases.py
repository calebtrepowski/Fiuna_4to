

class Casa:
    def __init__(self,_precio=0,_ciudad='AA',_superficie=0):
        self.precio = _precio
        self.ciudad = _ciudad
        self.superficie = _superficie
    
    def setPrecio(self,_precio):
        self.precio = _precio
    def getPrecio(self):
        return self.precio
    def setCiudad(self,_ciudad):
        self.ciudad = _ciudad
    def getCiudad(self):
        return self.ciudad
    def setSuperficie(self,_superficie):
        self.superficie = _superficie
    def getSuperficie(self):
        return self.superficie
    
    def toString(self):
        return "\nPrecio: "+str(self.precio)+"\nCiudad: "+str(self.ciudad)+"\nSuperficie: "+str(self.superficie)

class Duplex(Casa):
    def __init__(self,_precio = 0,_ciudad = 'AA',_superficie = 0,_cantidadPisos = 1):
        Casa.__init__(self,_precio,_ciudad,_superficie)
        self.CantidadPisos = _cantidadPisos
    

    def setCantidadPisos(self,_cantidadPisos):
        self.CantidadPisos = _cantidadPisos
    def getCantidadPisos(self):
        return self.CantidadPisos
    
    def toString(self):
        return Casa.toString(self)+"\nCantidad de Pisos: "+str(self.CantidadPisos)

class Departamento(Casa):
    def __init__(self,_precio = 0,_ciudad = 'AA',_superficie = 0,_cantidadPiezas = 1):
        Casa.__init__(self,_precio,_ciudad,_superficie)
        self.CantidadPiezas = _cantidadPiezas
    
    def setCantidadPiezas(self,_cantidadPiezas):
        self.CantidadPiezas = _cantidadPiezas
    def getCantidadPiezas(self):
        return self.CantidadPiezas

    def toString(self):
        return Casa.toString(self)+"\nCantidad de Piezas: "+str(self.CantidadPiezas)