#include <iostream>
#include "Fecha.h"
using namespace std;

int main()
{
    Fecha f1,f2;
    cin>>f1>>f2;
    cout<<f1<<endl<<f2<<endl;
    bool algo = f1>=f2;
		cout<<endl<<algo;
		algo = f1>f2;
		cout<<endl<<algo;
}
