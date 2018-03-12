
//a)

#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;



int main()
{
	//declarar variaveis
	int angulo = 0;
	double seno, cosseno, tangente;
	const double pi = 3.14159;
	cout << setprecision(6) << fixed;

	//operacoes

	cout << "ang" << "    " << "sen" << "      " << "cos" << "      " << "tan" << endl;

	while (angulo >= 0 && angulo <= 90)
	{
		seno = sin((angulo*pi) / 180);
		cosseno = cos((angulo*pi) / 180);

		if (angulo == 90)
			cout << angulo << "  " << seno << "  " << cosseno << "  " << "infinito" << endl;
		else
		{
			tangente = tan((angulo*pi) / 180);
			cout << angulo << "  " << seno << "  " << cosseno << "  " << tangente << endl;

		}

		angulo = angulo + 15;
	}

	system("pause");
	return 0;

}

//b)

#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	//declarar variaveis
	double angulo, seno, cosseno, tangente, incremento, lim1, lim2;
	cout << setprecision(6) << fixed;
	const double pi = 3.14159;

	//input
	cout << "Insira uma gama: ";
	cin >> lim1 >> lim2;
	cout << "Insira um incremento: ";
	cin >> incremento;

	//operacoes

	cout << "ang" << "    " << "sen" << "    " << "cos" << "    " << "tan" << endl;

	for (angulo = lim1; angulo <= lim2; angulo = angulo + incremento)
	{
		seno = sin((angulo*pi) / 180);
		cosseno = cos((angulo*pi) / 180);
		tangente = tan((angulo*pi) / 180);

		if (angulo == 90)
			cout << angulo << "  " << seno << "  " << cosseno << "  " << "infinito" << endl;
		else
		{

			cout << angulo << "  " << seno << "  " << cosseno << "  " << tangente << endl;

		}


	}
	system("pause");
	return 0;
}