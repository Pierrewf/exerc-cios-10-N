#include <iostream>
using namespace std;
int main()
{
	int numeros[5], numerosh[5], i,conta=0,numerosiguais=0,j,verificar=0;
	srand(time(0));
	
	
	for (i = 0; i < 5; i++)
	{
		numeros[i] = rand() % 50+1;
		cout << numeros[i] << " ";
	}
		
	cout << "me diga 5 numeros entre 1 a 50 para apostar na euro  milhoes\n";
	for (i = 0; i < 5; i++)
	{
		cout << "diga o " << i + 1 << "º numero ";
		cin >> numerosh[i];
	}
	for (i = 0; i <5; i++)   
	{

		for (j = 0; j < 5; j++)
		{
			if (numeros[i] == numerosh[j])
			{
				conta++;
			}
		}
		
	}
	cout << "voce acertou " << conta << " numeros\n";
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (numeros[i] == numerosh[j])
			{
				numerosiguais = numeros[i];
				cout << numerosiguais << " ";
			}
		}
		
	}
	if(conta==5)
	{
	cout << "voce acabou de ganhar 1 milhao de bitcois por acertar os 5 numeros";
	}
}

