#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	//declarar variaveis
	int h1, m1, s1, h2, m2, s2, total_segundos, dia, hf, mf, sf;

	//input
	cout << "Tempo 1 (horas minutos segundos) ? ";
	cin >> h1 >> m1 >> s1;
	cout << "Tempo 2 (horas minutos segundos) ? ";
	cin >> h2 >> m2 >> s2;

	//contas
	total_segundos = s2 + s1 + (m1 * 60) + (m2 * 60) + (h1 * 3600) + (h2 * 3600);
	sf = total_segundos % 60;
	mf = (total_segundos / 60) % 60;
	hf = (total_segundos / 3600) % 24;
	dia = (total_segundos / 3600) / 24;

	//resultados
	cout << "Soma dos tempos : " << dia << "dia, " << hf << "horas, " << mf << "minutos, " << sf << "segundos";
	system("pause");
	return 0;
}
