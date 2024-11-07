#include <iostream>
#include <string>
using namespace std;
void main()
{
	int  i;
	string nomes[5];
	char answer = 's';
	do {
		for (i = 0; i < 5; i++)
		{
			cout << "nome n" << i + 1 << "\n";
			cin >> nomes[i];
		}
		for (i = 4; i >= 0; i--)
		{
			cout << nomes[i] << "\n";
		}
		cout << "voce quer sair (s/n)";
		cin >> answer;
	} while (answer == 'n');
}
