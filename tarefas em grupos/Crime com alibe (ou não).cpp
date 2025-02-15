
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

// Com Tomas Dias, Heros, Andre, Andrei, Thomas Guerreiro e Leonardo

void main()
{
	int
		quantos,iniciocrime,finalcrime,inicioalibe,finalalibe;

	string alibi[100];

	setlocale(LC_ALL, "Portuguese");

	cin >> quantos;
	cout << "\n";

	for (int i = 0; i < quantos; i++)
	{
		cin >> iniciocrime;
		cin >> finalcrime;
		cout << "\n";
		cin >> inicioalibe;
		cin >> finalalibe;
		cout << "\n";

		if ((inicioalibe <= iniciocrime) && (finalalibe >= finalcrime))
		{
			alibi[i] = "Com alibi";
		}

		else
		{
			alibi[i] = "Sem alibi";
		}
	}

	for (int i = 0; i < quantos; i++)
	{
		cout << alibi[i] << "\n";
	}
}
