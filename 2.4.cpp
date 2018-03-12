#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	//declarar variaveis
	double peso, custo, peso_extra;

	//input
	cout << "Qual o peso? ";
	cin >> peso;

	//calculos
	if (peso < 500)
		custo = 5;
	else if (peso <= 1000)
	{
		peso_extra = peso - 500;
		custo = (ceil(peso_extra / 100))*1.5 + 5;
	}
	else
	{
		peso_extra = peso - 1000;
		custo = (ceil(peso_extra / 250)) * 5 + 12.5;
	}

	//resultados
	cout << "O custo de transporte =  " << custo << endl;

	system("pause");
	return 0;
}