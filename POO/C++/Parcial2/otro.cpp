namespace figuras{
  class Cuadrado{};
  class Circulo{};
}

/*Muy bien Solo no funciona cuando se leen mas de una palabra en titulo de la pelicula Esto se soluciona con getline y fflush*/
for (int i = 0; i < 3; i++)
{
  cout << "\nIngrese titulo y anho de la pelicula " << i + 1 << "/3:\n";
  string t;
  int a, res;
  getline(cin, t);
  cin >> a;
  cout << "\nResolucion: \n1 420\n2 4k\n";
  cin >> res;
  if (res == 1)
  {
    P[i] = new Resolucion420(t, a);
  }
  else if (res == 2)
  {
    P[i] = new Resolucion4k(t, a);
  }
  fflush(stdin); //else {cout << "Introduzca 1 o 2"; --i;} }