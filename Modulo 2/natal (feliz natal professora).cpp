#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int numeros, numerosC,i,j,valores[22][6],totalp=0,totalh=0;
	string pessoas[22] = { "Abdulah", "Andre", "Andrei", "Clara", "Henrise", "Heros", "Hugo", "Joao", "Leonardo", "Miguel", "Paloma", "Pedro", "Pierre", "Rafael", "Ricardo", "Salvador", "Sartaj", "Tiago", "Tomas", "Tomas Filipe", "Tuqeer", "Ulisses" };
	string coisas[6]= {"Batatas Fritas", "Bolo Rei", "Perfume", "Par de Meias", "Pijama", "Chocolate com Ginja"}; 
	for (i = 0; i < 22; i++)
	{
		for (j = 0; j < 6; j++)
		{
			cout << "pessoa: " << pessoas[i]<<"\n";
			cout << "quantas " << coisas[j]<<" ";
			cin >> valores[i][j];
		}
	}
	for (i= 0; i < 22; i++)
	{
		for (j = 0; j < 6; j++)
		{
			totalp = totalp + valores[i][j];
		}
	            
	}
cout << "\n\ntotal de produtos : "<<totalp;
for (i = 0; i < 22; i++)
{
	totalh = 0;
	for (j = 0; j < 6; j++)
	{
		totalh = totalh + valores[i][j];
		
	}
cout << "\n\n o total de produtos que o " << pessoas[i] << " deu foi de: " << totalh;
}
cout << "\n";
for (i = 0; i < 6; i++)
{
	totalh = 0;
	for (j = 0; j < 22; j++)
	{
		totalh = totalh + valores[j][i];

	}
cout << "\n\no total de " << coisas[i] << " foi de: " << totalh;
}

}
