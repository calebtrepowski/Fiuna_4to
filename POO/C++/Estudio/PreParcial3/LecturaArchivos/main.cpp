#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

#include "Persona.h"
using namespace archivos;

void prueba() {
  char str[] ="1234;claudio;barua acosta.";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str,";.");
  //while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, ";.");
    printf ("%s\n",pch);
    pch = strtok (NULL, ";.");
    printf ("%s\n",pch);
    pch = strtok (NULL, ";.");
  }
}
Persona* procesar(string linea) {
    //convertimos string a char[]
    char str[linea.size()+1];
    strncpy(str, linea.c_str(), sizeof(str));
    str[sizeof(str) - 1] = 0;
    char *pch;
    //hacemos split
    pch = strtok (str,";.");

    int ced = 0;
    std::istringstream ( pch ) >> ced;

    pch = strtok (NULL, ";.");
    string nom( pch );

    pch = strtok (NULL, ";.");
    string ape( pch );
    Persona *p = new Persona(ced, nom, ape);
    return p;
}
void lectura() {
    int reg =1;
   ifstream f("personas.txt", ifstream::in);
   while(!f.eof()) {
        string linea;
        getline(f, linea);
        Persona *p = procesar(linea);
        cout << reg++  << " " << p->toString() << endl;
   }
}
int main()
{
    cout << "Prueba de Lectura de Archivos!" << endl;
    lectura();
    //prueba();
    return 0;
}
