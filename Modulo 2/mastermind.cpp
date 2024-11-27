#include <iostream>
using namespace std;
int main()
{
	int numerosh[4], numerosr[4], i, j, contar ,tentativas=0;
	srand(time(0));
	for (i = 0; i < 4; i++)
	{
		numerosr[i]=rand()%2;
		
	}
	do {
		contar = 0;
		cout << "\nme diga 4 numeros sendo 0 ou 1 para tentar acertar a key\n";
		for (i = 0; i < 4; i++)
		{
			cout << "me diga o" << i + 1 << "º pin\n";
			cin >> numerosh[i];
		}
		for (i = 0; i < 4; i++)
		{
			if (numerosr[i] == numerosh[i])
			{
				contar++;
			}
		}
		cout << "voce acertou " << contar << " numeros\n";
		tentativas++;
		
	} while (contar != 4); 
    
		cout << "parabens voce acertou o pin em " << tentativas << " tentativas";
	
}
