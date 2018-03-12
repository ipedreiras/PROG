#include <stdlib.h>
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//declarar variaveis
	double a, b, c, d, e, f, x, y;

	//input
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "d=";
	cin >> d;
	cout << "e=";
	cin >> e;
	cout << "f=";
	cin >> f;

	//contas
	x = (c*e - b * f) / (a*e - b * d);
	y = (a*f - c * d) / (a*e - b * d);

	//resultado
	cout << "a solucao do sistema e:" << endl << "x=" << x << endl;
	cout << "y=" << y << endl;


	system("pause");
	return 0;

}