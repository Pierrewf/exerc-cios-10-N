#include <iostream>
using namespace std;
int main()
{
	int Numb[10], i, soma = 0, conta = 0, escolha;
	cout << "me de um numero\n";
	for (i = 0; i < 10; i++)
	{
		cout << "numero" << i + 1 << "º";
		cin >> Numb[i];
	}
	cout << "contar os numeros negativos (1) ou somar os numeros negativos (2)\n";
	cin >> escolha;
	switch (escolha)
	{
	case 1:
		for (i = 0; i < 10; i++) {
			if (Numb[i] < 0)
			{
				conta++;
			}

		}
		cout << "a quantidade de numeros negativos e " << conta; break;
	case 2:
		for (i = 0; i < 10; i++) {
			if (Numb[i] < 0)
			{
				soma += Numb[i];
			}
		}
		cout << "as somas dos numeros negativos e de " << soma; break;
	default:
		cout << "ja que nao queres nada se lasca kkkkkkkk"; break;
	}
}




	
	


