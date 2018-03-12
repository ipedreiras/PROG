#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	//declarar variaveis
	int numero, i, acumulador = 2, resto;

	//input
	cout << "Escolha um numero: ";
	cin >> numero;

	//operacoes
	i = numero - 1;
	while (i >1)
	{
		resto = numero % i;

		if (resto == 0)
			acumulador = acumulador + 1;
		i = i - 1;
	}

	//resultados
	if (acumulador == 2)
		cout << "O numero que escolheu e' primo" << endl;
	else cout << "O numero que escolheu nao e' primo" << endl;
	system("pause");
	return 0;
}