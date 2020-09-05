import clases

pila1 = clases.Pila()
print("Esta vacia?: ",pila1.verificar())
pila1.agregarElemento(1)
pila1.agregarElemento(2)
pila1.agregarElemento(3)
pila1.agregarElemento(4)
print("Pila 1: ",pila1)
print("Eliminando: ",pila1.eliminarElemento())
print("Pila 1: ",pila1)
while not(pila1.verificar()):
  print("Eliminando: ",pila1.eliminarElemento())
  print("Esta vacia?: ",pila1.verificar())
print("Eliminando: ",pila1.eliminarElemento())

print("--------------------------")

cola1 = clases.Cola()
print("Esta vacia?: ",cola1.verificar())
cola1.agregarElemento("Juan")
cola1.agregarElemento("Jose")
cola1.agregarElemento("Ana")
cola1.agregarElemento("Benjamin")
print("Cola 1: ",cola1)
print("Eliminando: ",cola1.eliminarElemento())
print("Cola 1: ",cola1)
while not(cola1.verificar()):
  print("Eliminando: ",cola1.eliminarElemento())
  print("Esta vacia?: ",cola1.verificar())
print("Eliminando: ",pila1.eliminarElemento())