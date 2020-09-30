import clases

#Estoy teniendo un problema con el environment de python
#en mi pc, y la unica forma de hacer funcionar es con esto
import os
home_path = os.path.dirname(os.path.realpath(__file__)).replace("\\","/")
#

def guardar(nombre,vector):
  archivo = open(home_path+"/Datos/"+nombre+".txt", 'w')
  archivo.write(str(vector))
  archivo.close()

v1 = clases.Vector(1,2,3)
v2 = clases.Vector(4,4,5)
v3 = clases.Vector(-1,5,3)
v4 = clases.Vector(3.14,4,5.2)
v5 = clases.Vector(1,2,3)

print(v1+v2)
print(v3-v2)
print(v4*6)
print(v1==v5)
print(v1==v3)
try:
  guardar("datosVar1",v4)
  guardar("datosVar2",v3)
except FileNotFoundError:
  print("Error al abrir/escribir el archivo")