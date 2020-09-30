#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string linea;
    fstream fs("hola.txt");
    if( fs.is_open() )
		{
			while(getline(fs,linea))
			{
				cout << linea << '\n';
			}
			fs.close();
		}
		else {cout << "Error\n";}
		return 0;
}
