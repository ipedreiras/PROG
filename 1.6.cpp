#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	//declarar variaveis
	double x1, y1, x2, y2, x3, y3, area, l1, l2, l3, s;

	//input
	cout << "vertice (x1,y1) ?";
	cin >> x1 >> y1;
	cout << "vertice (x2,y2) ?";
	cin >> x2 >> y2;
	cout << "vertice (x3,y3) ?";
	cin >> x3 >> y3;

	//cálculos
	l1 = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
	l2 = sqrt(((x3 - x2)*(x3 - x2)) + ((y3 - y2)*(y3 - y2)));
	l3 = sqrt(((x3 - x1)*(x3 - x1)) + ((y3 - y1)*(y3 - y1)));
	s = (l1 + l2 + l3) / 2;
	area = sqrt(s*(s - l1)*(s - l2)*(s - l3));

	//resultados
	cout << "As coordenadas dadas sao: (" << x1 << "," << y1 << ")  (" << x2 << "," << y2 << ")  (" << x3 << "," << y3 << ")" << endl;
	cout << "A area = " << area << endl;
	system("pause");
	return 0;
}