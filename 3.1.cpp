#include <stdlib.h>
#include <iostream>

using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
	//declarar variaveis
	double distancia_2_pontos;

	//operacoes

	distancia_2_pontos = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	return distancia_2_pontos;
}

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
	//declarar variaveis
	double	area_total, perimetro, semi_perimetro, lado_1, lado_2, lado_3;

	//operacoes

	lado_1 = distance(x1, y1, x2, y2);
	lado_2 = distance(x1, y1, x3, y3);
	lado_3 = distance(x2, y2, x3, y3);

	perimetro = lado_1 + lado_2 + lado_3;
	semi_perimetro = perimetro / 2;

	return area_total = sqrt(semi_perimetro*(semi_perimetro - lado_1)*(semi_perimetro - lado_2)*(semi_perimetro - lado_3));

}

int main()
{
	//declarar variaveis
	double x1, y1, x2, y2, x3, y3;

	//input
	cout << "Insira os pontos: " << endl;
	cout << "x1: ";
	cin >> x1;
	cout << "y1: ";
	cin >> y1;
	cout << "x2: ";
	cin >> x2;
	cout << "y2: ";
	cin >> y2;
	cout << "x3: ";
	cin >> x3;
	cout << "y3: ";
	cin >> y3;

	//resultados

	cout << "A area do perimetro e': " << area(x1, y1, x2, y2, x3, y3) << endl;

	system("pause");
	return 0;
}