#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int i,j,escolha;
	string amigos1[5], namorados[5] = { "Heros","Henrise","Pierre","Andrei","Pedro" };
	string places[5], namoradas[5] = { "Marta","Clara","Julia","Carol","Eduarda" };
	string amigos2[5], lugares[5] = { "Escola","Shopping","Festa","Bar","Restaurante" };
	srand(time(0));	
	cout << "programa automatico (0) // programa manual (1) ";
	cin >> escolha;
	switch (escolha)
	{
	case 0:
	{
		cout << namorados[rand() % 5] << " Vai encontar a " << namoradas[rand() % 5] << " No(a) " << lugares[rand() % 5];
	}break;
	case 1:
	{
		for (i = 0; i < 5; i++)
		{
			cout << "nome do " << i + 1 << "º namorado ";
			cin >> amigos1[i];
		}
		for (i = 0; i < 5; i++)
		{
			cout << "nome da " << i + 1 << "º namorada ";
			cin >> amigos2[i];
		}
		for (i = 0; i < 5; i++)
		{
			cout << "nome do " << i + 1 << "º lugar ";
			cin >> places[i];
		}

		cout << amigos1[rand() % 5] << " vai encontrar a " << amigos2[rand() % 5] << " No(a) " << places[rand() % 5] << "\n";
	}break;
	default:
	{
		cout << "Burrim mane isso nem e uma opção";
	}
	}
}