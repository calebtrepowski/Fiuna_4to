#include <iostream>
#include <fstream>

using namespace std;

void escritura(string linea){
    ofstream file("numeracion.txt",ios::app);
    if(file.good()){
        file<<linea<<endl;
        file.flush();
        file.close();
    }else{
        cerr<<"Problemas al abrir el archivo";
    }
}

void lectura(){
    ifstream file("numeracion.txt");
    while(!file.eof()){
        string linea;
        getline(file,linea);
        cout<<linea<<endl;
    }
    file.close();
}

int main()
{
    lectura();
    return 0;
}
