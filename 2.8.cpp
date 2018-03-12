//a)
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	//declarar variaveis

	int numero, soma = 0, maximo, minimo, acumulador = 0;
	double media = 0;

	//operacoes
	cin >> numero;
	maximo = numero;
	minimo = numero;

	while (numero != 0)
	{
		soma = soma + numero;
		if (numero > maximo)
			maximo = numero;
		if (numero < minimo)
			minimo = numero;
		acumulador = acumulador + 1;
		media = soma / acumulador;

		cin >> numero;


	}

	//resultados


	cout << "Soma= " << soma << endl << "media= " << media << endl << "menor= " << minimo << endl << "maior= " << maximo << endl;
	system("pause");
	return 0;
}

//b)