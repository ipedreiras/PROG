#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

string isPrime(int numero)
{
	//declarar variaveis
	int acumulador = 2, i;

	//operacoes
	i = (numero - 1);
	while (i > 1)
	{
		if (numero%i == 0)
			acumulador = acumulador + 1;
		i = i - 1;
	}
	//resultado
	if (numero == 0 || numero == 1 || acumulador > 2)
		return "O numero que escolheu nao e' primo";
	else
		return "O numero que escolheu e' primo";
}

int main()
{
	//declarar variaveis
	int n;

	//input
	cout << "Escolha um numero para analisar: ";
	cin >> n;

	//resultados
	cout << isPrime(n) << endl;

	system("pause");
	return 0;
}