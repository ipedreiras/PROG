//2.2 
//a)
#include <stdlib.h>
#include <iostream>

using namespace std;
int main()
{
	//declarar variaveis
	double numero_1, numero_2, numero_3, maior, menor;

	//input
	cout << "numero_1=";
	cin >> numero_1;
	cout << "numero_2=";
	cin >> numero_2;
	cout << "numero_3=";
	cin >> numero_3;

	//calculo
	if (numero_1 > numero_2 && numero_1 > numero_3)
		maior = numero_1;
	else if (numero_2 > numero_3)
		maior = numero_2;
	else maior = numero_3;

	if (numero_1 < numero_2 && numero_1 < numero_3)
		menor = numero_1;
	else if (numero_2 < numero_3)
		menor = numero_2;
	else menor = numero_3;

	//resultados
	cout << "o numero menor = " << menor << "e o maior = " << maior;

	system("pause");
	return 0;
}
//b)
#include <stdlib.h>
#include <iostream>

using namespace std;
int main()
{
	//declarar variaveis
	double numero_1, numero_2, numero_3, maior, menor, meio;

	//input
	cout << "numero_1=";
	cin >> numero_1;
	cout << "numero_2=";
	cin >> numero_2;
	cout << "numero_3=";
	cin >> numero_3;

	//calculo
	if (numero_1 > numero_2 && numero_1 > numero_3)
		maior = numero_1;
	else if (numero_2 > numero_3)
		maior = numero_2;
	else maior = numero_3;

	if (numero_1 < numero_2 && numero_1 < numero_3)
		menor = numero_1;
	else if (numero_2 < numero_3)
		menor = numero_2;
	else menor = numero_3;

	if (numero_1 != maior && numero_1 != menor)
		meio = numero_1;
	else if (numero_2 != maior && numero_2 != menor)
		meio = numero_2;
	else meio = numero_3;

	//resultados
	cout << "Ordem decrescente:  " << maior << "   " << meio << "   " << menor << endl;

	system("pause");
	return 0;

}

//c)
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	//declarar variaveis
	double l1, l2, l3, soma_l_pequenos, maior;

	//input
	cout << "os 3 numeros sao: ";
	cin >> l1 >> l2 >> l3;

	//calculos
	if (l1>l2 && l1 > l3)
	{
		maior = l1;
		soma_l_pequenos = l2 + l3;

	}
	else if (l2 > l3)
	{
		maior = l2;
		soma_l_pequenos = l1 + l3;
	}
	else
	{
		maior = l3;
		soma_l_pequenos = l1 + l2;
	}

	//resultados
	if (soma_l_pequenos <= maior)
		cout << "Nao e possivel construir um triangulo" << endl;
	else cout << "E um triangulo" << endl;

	system("pause");
	return 0;
}