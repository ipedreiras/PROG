#include <stdlib.h>
#include <iostream>

using namespace std;
int main()
{
	//declarar variaveis
	double numero1, numero2, resultado;
	char operacao;

	//input
	cout << "numero1= ";
	cin >> numero1;
	cout << "operacao= ";
	cin >> operacao;
	cout << "numero2= ";
	cin >> numero2;

	//calculos

	if (operacao == '+')
		resultado = numero1 + numero2;
	else if (operacao == '-')
		resultado = numero1 - numero2;
	else if (operacao == '*')
		resultado = numero1 * numero2;
	else if (operacao == '/')
		resultado = numero1 / numero2;

	//output
	cout << numero1 << "  " << operacao << "   " << numero2 << " = " << resultado << endl;

	system("pause");
	return 0;


}