//a)
#include <stdlib.h>
#include <iostream>

using namespace std;
int main()
{
	//declarar variaveis
	int numero, alg_menos_signif, quociente, alg_mais_signif;

	//input
	cout << "Escolha um numero: ";
	cin >> numero;

	//operacoes
	alg_menos_signif = numero % 10;
	quociente = numero / 10;
	alg_mais_signif = quociente / 10;

	//resultados
	if (alg_menos_signif == alg_mais_signif)
		cout << "E' capicua " << endl;
	else cout << "Nao e' capicua" << endl;

	system("pause");
	return 0;
}
//b)

