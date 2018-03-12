
#include <stdlib.h>
#include <iostream>

using namespace std;
//declarar uma constante
#define pi 3.14159

int main()
{
	//declarar variaveis
	double M, p, r;

	//input
	cout << "p = ";
	cin >> p;
	cout << "r = ";
	cin >> r;


	//contas 
	M = (4.0 / 3.0) * p*pi*r*r*r;

	//mostrar os resultados
	cout << "M = " << M << "kg" << endl;
	system("pause");
	return 0;


}