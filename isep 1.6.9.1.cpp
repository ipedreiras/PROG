#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	//declarar variaveis
	int lim1, lim2, i, soma = 0;

	//input
	cout << "Escolha os limites do intervalo: ";
	cin >> lim1 >> lim2;

	//operacoes
	if (lim2>lim1)
	{
		for (i = lim1; i <= lim2; i = i + 1)
		{
			soma = soma + i;
		}
	}
	else if (lim1 > lim2)
	{
		for (i = lim2; i <= lim1; i = i + 1)
		{
			soma = soma + i;
		}


	}
	else soma = lim1;




	//resultado
	cout << "A soma do intervalo e': " << soma << endl;
	system("pause");
	return 0;
}