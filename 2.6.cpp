//a)

#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	//declarar variaveis 
	int n, m = 2;
	double lim;
	bool primo = true;

	//input
	cout << "Insira um numero para ver se e' primo: ";
	cin >> n;

	//operações
	lim = sqrt(n);

	if (n == 1)
		primo = false;
	else
		while (m <= lim)
		{
			if (n%m == 0)
			{
				primo = false;
				break;
			}
			else m = m + 1;
		}

	//output
	if (primo)
		cout << "O numero que escolheu e' primo" << endl;
	else cout << "O numero que escolheu nao e' primo" << endl;

	system("pause");
	return 0;


}
//b
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	//declarar variaveis
	int n = 2, m = 2, acumulador = 0;
	double lim;
	bool primo = true;

	//operacoes

	while (acumulador < 100)
	{
		lim = sqrt(n);
		while (m <= lim)
		{
			if (n%m == 0)
			{
				primo = false;
				break;
			}
			else
				m = m + 1;

		}
		if (primo)
		{
			cout << n << " ";
			acumulador = acumulador + 1;
		}
		n = n + 1;
		m = 2;
		primo = true;
	}

	system("pause");
	return 0;

}

//c)
