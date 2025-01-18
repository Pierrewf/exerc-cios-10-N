#include <iostream>
#include <locale.h>
using namespace std;

int totais(int valores[3][3],int i) 
{
	int  j,total=0;

	
		for (j = 0; j < 3; j++)
		{
			total = total + valores[i][j];
		
        }
	
	return total;
}
int totaisp(int valores[3][3], int i)
{
	int  j, total = 0;


	for (j = 0; j < 3; j++)
	{
		total = total + valores[j][i];

	}
	return total;
}
int main()
{
	setlocale(LC_ALL, "portuguese");
	string meses[3] = { "janeiro","fevereiro","março" };
	string produtos[3] = {"batatas", "cenouras","couves"};
	int i, j,valores[3][3],escolha,conta;
	for (i = 0; i < 3; i++)
	{
     	cout<< meses[i]<<"\n";
		
		for (j = 0; j < 3; j++) 
		{

			  cout<<produtos[j]<<" ";
			  cin >> valores[i][j];
		}
	}
	cout << "oque você quer fazer agora?\n| 0 - sair |\n| 1 - calcular totais mensais |\n| 2 - calcular totais por produto |\n| 3 - inserir novos valores |\n";
	cin >> escolha;
	switch (escolha)
	{
	case 0:
	{
		cout << "digitou 0 saiuuuuuuuuu"; break;
	}
	case 1:
	{ 
		
		for (i = 0; i < 3; i++)
		{
            conta = totais(valores,i);
			cout << "total de produtos no mes de " << meses[i] << " foi de: " << conta << "\n";
		}
         	
	}
	case 2:
	{

		for (i = 0; i < 3; i++)
		{
			conta = totaisp(valores, i);
			cout << "total de " << produtos[i] << " no ano foi de: " << conta << "\n";
		}
	}
	case 3:
	{
		
	main();
		
	}

	}
}