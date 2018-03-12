#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	//declarar as variaveis
	int A, B, C, soma;
	double media, dif_A_media, dif_B_media, dif_C_media;

	//input
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "C: ";
	cin >> C;

	//contas   
	soma = A + B + C;
	media = static_cast<double>(soma) / 3;
	dif_A_media = A - media;
	dif_B_media = B - media;
	dif_C_media = C - media;

	//mostrar os resultados

	cout << "media =" << media << endl;
	cout << "A-media =" << dif_A_media << endl;
	cout << "B - media =" << dif_B_media << endl;
	cout << "C-media =" << dif_C_media << endl;

	system("pause");
	return 0;
}