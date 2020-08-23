import clases
e1 = clases.Electrodomestico(12500, "Plancha")
c1 = clases.Celular(300000, "Samsung", "s4")
t1 = clases.Television(450000, "Phillips", 32)

e1.setprecio(20000)
print(e1.nombre)
print(e1.toString())

c1.setmodelo("s5")
print(c1.toString())

t1.settamanoPulg(46)
print(t1.toString())