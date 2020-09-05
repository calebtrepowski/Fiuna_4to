# ============= PROGRAMA HECHO EN Python v3.8.1 =============
# :::::::::::::::::::: numpy v1.18.1 ::::::::::::::::::::::::
# ______ Alumno: Caleb Trepowski Castillo - CI: 4635928 _____
# Segundo examen parcial, Metodos Numericos, anio 2020
# ----------------------- Tema 3 ----------------------------
""" 
Elabore un programa en Python que implemente el metodo de 3/8
Simpson compuesto para hallar aSb f(x)dx, siendo dados los
limites de integracion a y b y el integrando f(x).
Al inicio del programa (especificamente luego de introducir
los datos), verifique la condicion que debe cumplirse para
aplicar el metodo. En caso de no cumplirse la condicion,
imprima un mensaje de error que termine el programa.
"""
import numpy as np

f = lambda x: np.exp(x)*np.sin(x)
a = 0
b = 1
N = 100000000 # cantidad de subintervalos
h = (b-a)/N

try:
  if N%2 != 0:
    raise ValueError
  x = np.linspace(a,b,N+1)
  w = np.ones(N+1)
  fx = f(x)
  w[1:-1:3] = w[2:-1:3] = 3
  w[3:-1:3] = 2
  I = (3*h/8)*np.dot(fx,w)
  print(I)
except ValueError:
  print("Error: La cantidad de subintervalos debe ser par")
