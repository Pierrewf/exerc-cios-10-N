#include <iostream>
using namespace std;
int main()
{
	int valoresa[10], valoresb[10], valoresab[20],i,pos=0,maior=-25,posicao=-1;
	for (i = 0; i < 10; i++)
	{
		cout << "me diga um numero a ";
		cin >> valoresa[i];
		cout << "me diga um numero b ";
		cin >> valoresb[i];
	}
	for (i = 0; i < 20; i++)
	{
		valoresab[i] = valoresa[pos];
		i = i + 1;
		valoresab[i] = valoresb[pos];
		pos = pos + 1;
		
	}
	for (i = 0; i < 20; i++)
	{
		cout << valoresab[i]<<" ";
	}
	for (i = 0; i < 20; i++)
	{
		if (valoresab[i] > maior)
		{
			maior = valoresab[i];
			posicao = i;
		}
	}

	cout << "o maior valor e o " << maior << "e esta na posicao " << posicao ;
	
}