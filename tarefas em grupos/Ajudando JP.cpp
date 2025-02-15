#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	int i, numeros[13], soma=0,resto;
	for (i = 0; i < 13; i++)
	{
		cin >> numeros[i];
	}
	for (i = 0; i < 12; i++)
	{
		if ( i % 2 == 0)
		{
			soma=soma + (numeros[i] * 1);
		}
		else
		{
			soma=soma+(numeros[i] * 3);
		}
		
	}
	resto = soma % 10;
	resto = 10 - resto;

		if (resto == numeros[12])
		{
			cout << "OK";
		}
		else
		{
			cout << "ERROR " << resto;
		}
	
}