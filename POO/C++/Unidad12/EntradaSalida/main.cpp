#define enter '\n'
#include <iostream>
#include <fstream>
using namespace std;

#include "Something.h"

class IOException : exception {
  public:
    const char* what() const throw()
    {
        return "Error al abrir el archivo";
    }
};

void entrada1() throw (IOException) {

    cout << "Lectura con get(), caracter a caracter" << endl;
    ifstream fichero("datos2.txt");
    if (fichero.fail()) throw IOException();

    char caracter;
    while(fichero.get(caracter)) {
        cout << caracter;
    }
    cout << endl << endl;
    fichero.close();                     //cierre del flujo
}

void entrada2() throw (IOException) {

    cout << "Lectura con getline(), linea a linea" << endl;
    ifstream fichero("datos2.txt");
    if (fichero.fail()) throw IOException();

    int n = 64;
    char line[n];
    while(fichero.getline(line, n, enter)) {
        cout << line << enter;
    }
    cout << endl << endl;
    fichero.close();                     //cierre del flujo
}


void salida1() throw (IOException) {
    string linea = "Esta es una prueba de escritura en archivo";
    ofstream fichero("datos2.txt", ios::app);
    fichero << linea << enter;

    cout << "Ingrese una frase: ";
    getline (cin, linea);
    fichero << linea << enter;
    fichero.close();
}

void pruebaIO() {
    try {
      entrada1();
    }
    catch(IOException &io){
      cout << io.what();
    }


    try {
      salida1();
      entrada2();
    }
    catch(IOException &io){
      ofstream fichero("datos2.txt");
      fichero.close();
      cout << io.what();
    }

}

void pruebaAlgo() {
    //si agregamos espacios al nombre?
    Something s1("Rey_Juan_Carlos", 80, 182);

    Something s2;
	ofstream ofs("saved.txt");

	ofs << s1; // store the object to file
	ofs.close();

	ifstream ifs("saved.txt");
	// read the object back in
	if(ifs >> s2)
	{
		// read was successful therefore s2 is valid
		cout << s2 << '\n'; // print s2 to console
	}
	else {
        cout << "Problemas al procesar el archivo ifs";
	}
	ifs.close();
}

int main() {

    //pruebaIO();
    pruebaAlgo();

return 0;
}
