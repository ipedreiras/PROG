//a)
#include <stdlib.h>
#include <iostream>

using namespace std;


//verifica se é bissexto
bool bissexto(int numero)
{
	//resultados

	if ((numero % 4 == 0 && numero % 100 != 0) || (numero % 400 == 0 && numero % 100 == 0))
		return true;
	else return false;
}

int main()
{
	//declarar variaveis
	int numero;

	//input
	cout << "Insira um numero: ";
	cin >> numero;

	//operacoes
	if (bissexto(numero))
		cout << "O numero que escolheu e' um ano bissxeto" << endl;
	else cout << "O numero que escolheu nao e' um ano bissexto" << endl;

	system("pause");
	return 0;

}

//b)
#include <stdlib.h>
#include <iostream>

using namespace std;

//verifica se é bissexto
bool bissexto(int ano)
{
	//resultados

	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0 && ano % 100 == 0))
		return true;
	else return false;
}

//devolve numero de dias

int dias_mes(int mes, int ano)
{
	int dias;

	if (bissexto(ano))
	{
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
			return dias = 31;
		else if (mes == 2)
			return dias = 29;
		else return dias = 30;
	}
	else
	{
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
			return dias = 31;
		else if (mes == 2)
			return dias = 28;
		else return dias = 30;
	}
}

//devolve os resultados na linha de comando

int main()
{
	//declrar variaveis
	int  mes, ano;

	//input
	cout << "Escolhe um mes e um ano: ";
	cin >> mes >> ano;

	//resultados
	cout << "O numero do dias do mes e do rescpectivo ano que escolheu e': " << dias_mes(mes, ano) << endl;

	system("pause");
	return 0;

}

//c)
#include <stdlib.h>
#include <iostream>

using namespace std;

//verifica se é bissexto
bool bissexto(int ano)
{
	//resultados

	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0 && ano % 100 == 0))
		return true;
	else return false;
}


//devolve o códgio do mês

int codigo(int mes, int ano)
{
	if (bissexto(ano))
	{
		if (mes == 1 || mes == 7)
			return 6;
		else if (mes == 2 || mes == 8)
			return 2;
		else if (mes == 3 || mes == 11)
			return 3;
		else if (mes == 4)
			return 6;
		else if (mes == 5)
			return 1;
		else if (mes == 6)
			return 4;
		else if (mes == 10)
			return 0;
		else if (mes == 9 || mes == 12)
			return 5;
	}
	else
	{
		if (mes == 1 || mes == 10)
			return 0;
		else if (mes == 2 || mes == 3 || mes == 11)
			return 3;
		else if (mes == 4 || mes == 7)
			return 6;
		else if (mes == 5)
			return 1;
		else if (mes == 6)
			return 4;
		else if (mes == 8)
			return 2;
		else if (mes == 9 || mes == 12)
			return 5;
		else if (mes == 10)
			return 0;
	}
}

//devolve o numero da dia da semana
int numero_ds(int dia, int ano, int mes)
{
	//declarar variaveis
	int ds, a, s;
	//operacoes
	a = ano % 100;
	s = ano / 100;

	ds = (int((5 * a) / 4) + codigo(mes, ano) + dia - (2 * (s % 4)) + 7) % 7;

	//resultado
	return ds;

}

//devolve o dia da semana
int main()
{
	//declarar variaveis
	int dia, ano, mes;

	//input
	cout << "Insira o dia, o mes e o ano: ";
	cin >> dia >> mes >> ano;

	//resultados
	if (numero_ds(dia, ano, mes) == 0)
		cout << "ds= " << 0 << endl << "O dia da semana  e': Sabado" << endl;
	else if (numero_ds(dia, ano, mes) == 1)
		cout << "ds= " << 1 << endl << "O dia da semana  e': Domingo" << endl;
	else if (numero_ds(dia, ano, mes) == 2)
		cout << "ds= " << 2 << endl << "O dia da semana  e': Segunda-feira" << endl;
	else if (numero_ds(dia, ano, mes) == 3)
		cout << "ds= " << 3 << endl << "O dia da semana  e': Terca-feira" << endl;
	else if (numero_ds(dia, ano, mes) == 4)
		cout << "ds= " << 4 << endl << "O dia da semana  e': Quarta-feira" << endl;
	else if (numero_ds(dia, ano, mes) == 5)
		cout << "ds= " << 1 << endl << "O dia da semana  e': Quinta-feira" << endl;
	else if (numero_ds(dia, ano, mes) == 6)
		cout << "ds= " << 6 << endl << "O dia da semana  e': Sexta-feira" << endl;

	system("pause");
	return 0;
}

//d)