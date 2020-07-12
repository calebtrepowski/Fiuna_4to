class Persona:
    cedula = 0
    nombre = ""
    apellido = ""

    def __init__(self,_cedula,_nombre,_apellido):
        self.cedula = _cedula
        self.nombre = _nombre
        self.apellido = _apellido
    
    def toString(self):
        return str(self.cedula),str(self.nombre),str(self.apellido)