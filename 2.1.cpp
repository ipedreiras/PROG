#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	//declarar variaveis
	double  a, b, c, d, e, f, x, y;

	//input
	cout << "a?";
	cin >> a;
	cout << "b?";
	cin >> b;
	cout << "c?";
	cin >> c;
	cout << "d?";
	cin >> d;
	cout << "e?";
	cin >> e;
	cout << "f?";
	cin >> f;

	//calculos
	if (a*e - b * d == 0)
		cout << "O sistema e' impossivel." << endl;
	else if (a == 0 || b == 0 || c == 0 || d == 0 || e == 0 || f == 0)
		cout << "O sistema e' indeterminado." << endl;
	else
	{
		x = (c*e - b * f) / (a*e - b * d);
		y = (a*f - c * d) / (a*e - b * d);		cout << "x=  " << x << endl << "y=  " << y << endl;
	}

	system("pause");
	return 0;

}