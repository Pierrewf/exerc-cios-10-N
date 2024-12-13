#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	string pessoas[100];
	string disciplinas[100];
	int conta = 0, i, notas[100][100], numerosp, numerosd, j,media=0;
	cout << "quantas pessoas tem na sala de aula? ";
	cin >> numerosp;
	cout << "quantas disciplinas? ";
	cin >> numerosd;
	for (i = 0; i < numerosp; i++)
	{
		cout << "nome do " << i + 1 << "º aluno: ";
		cin >> pessoas[i];
		
	}
	for (i = 0; i < numerosd; i++)
	{
		cout << "disciplina " << i + 1 << " ";
		cin >> disciplinas[i];
	}
	for (i = 0; i < numerosp; i++)
	{
		for (j = 0; j < numerosd; j++)
		{
			cout << "nota do " << pessoas[i] << " em " << disciplinas[j] << " ";
			cin >> notas[i][j];
			cout << " ";
		}
	}
	for (i = 0; i < numerosp; i++)
	{
		conta = 0;
		for (j = 0; j < numerosd; j++)
		{
          conta=conta+notas[i][j];

		}
		cout << "a media do aluno " << pessoas[i] << " é " << conta / numerosd<< "\n";
	}
	for (i = 0; i < numerosd; i++)
	{
		conta = 0;
		for (j = 0; j < numerosp; j++)
		{
			conta = conta + notas[j][i];

		}
		cout << "a media da disciplina " << disciplinas[i] << " é " << conta / numerosp << "\n";
	}
}