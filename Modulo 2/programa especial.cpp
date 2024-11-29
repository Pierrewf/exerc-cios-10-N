#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"portuguese");
	int numeros[20],i,unico, j,contar=0;
	cout << "me de 20 numeros\n";
	for ( i = 0; i < 20; i++)
	{
		cin >> numeros[i];
	
	}
	
		for (i = 0; i < 1; i++)
		{
			cout << "unico numero";
			cin >> unico;
			
			if (numeros[i] == unico)
			{
				contar++;
			}
		}
		if (contar > 0)
		{
			cout << "encontrei ";
		}
		else
		{
			cout << "nao encontrei";
		}
		
	
}