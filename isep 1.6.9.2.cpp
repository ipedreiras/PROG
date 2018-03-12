#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	//declarar variaveis
	int numero, resultado = 0, i;

	//input
	cout << "Escolha um numero: ";
	cin >> numero;

	//operacoes

	resultado = 1;

	for (i = 1; i <= numero; i = i + 1)
		resultado = resultado * i;

	//resultado
	cout << "O fatorial do numero que escolheu e': " << resultado << endl;
	system("pause");
	return 0;
}