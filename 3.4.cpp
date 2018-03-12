#include <stdlib.h>
#include <iostream>

using namespace std;

double round(double x, unsigned n)
{
	//declarar variaveis
	double y;
	//operacoes
	y = floor(x * pow(10, n) + 0.5) / pow(10, n);

	return y;

}

int main()
{
	//declarar variaveis
	double numero;
	int casas_decimais;

	//input
	cout << "Escola um numero para arredondar: ";
	cin >> numero;
	cout << "O numero de casas decimais? ";
	cin >> casas_decimais;

	//resultado
	cout << "O numero arredondado = " << round(numero, casas_decimais) << endl;

	system("pause");
	return 0;

}