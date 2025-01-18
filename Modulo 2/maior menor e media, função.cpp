#include <iostream>
#include <locale.h>
using namespace std;
void verificar1(int n[10])
{
	int i, media = 0, contar = 0;
	for (i = 0; i < 10; i++)
	{
		contar += n[i];
	}
	media = contar / 10;
	cout << "a media é " << media;
}
void verificar2(int n[10])
{
	int i, menor;
	menor = n[0];
	for (i = 0; i < 10; i++)
	{
		if (n[i] < menor)
		{
			menor = n[i];
		}
	}
	cout <<" o menor numero é o: "<< menor;
}
void verificar3(int n[10])
{
	int i, maior;
	maior = n[0];
	for (i = 0; i < 10; i++)
	{
		if (n[i] > maior)
		{
			maior = n[i];
		}
	}
	cout << " o maior numero é o: " << maior;
}
void main()
{
	setlocale(LC_ALL, "portuguese");
	int n[10], i, escolha;
	for (i = 0; i < 10; i++)
	{
		cout << "me de o " << i + 1 << "º numero ";
		cin >> n[i];
	}
	do
	{
		cout << "\n\nescolha oque quer fazer\n(1 - calcular a media dos numeros)\n(2 - achar o menor)\n(3 - achar o maior)\n(0 - sair)\n";
		cin >> escolha;
		switch (escolha)
		{
		case 0:
		{
			cout << "escolheu 0 saiuuuuuuuuuuuuuuuuuuuuuuu"; break;
		}
		case 1:
		{
			verificar1(n); break;
		}
		case 2:
		{
			verificar2(n); break;
		}
		case 3:
		{
			verificar3(n); break;

		}
		
		}
	}while (escolha != 0);

}