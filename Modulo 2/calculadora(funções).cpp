#include <iostream>
#include <locale.h>
using namespace std;

int soma(int a,int conta)
{
		a=a + conta;
	return a;
}
int divis�o(int a,int conta)
{
	a = a / conta;
return a;
}
int multiplica��o(int a,int conta )
{
	a = a * conta;
	return a;
}
int subtra��o(int a,int conta )
{
	a = a - conta;
	return a;
}
void main()
{
	setlocale(LC_ALL, "portuguese");
	int numero1, numero2, valor, conta;
	cout << "me de o 1� numero: ";
	cin >> numero1;
	cout << "me de o 2� numero: ";
	cin >> numero2;
	cout << "agora escolha a conta que quer fazer | 1 - soma | 2 - divis�o | 3 - multiplica��o | 4 - subtra��o | 0 - sair |\n";
	cin >> valor;
	switch (valor)
	{
	case 0:
	{
		break;
	}
	case 1:
	{
		conta = soma(numero1, numero2);
		cout << conta; break;
	}
	case 2:
	{
		conta = divis�o(numero1, numero2);
		cout << conta; break;
	}
	case 3:
	{
		conta = multiplica��o(numero1, numero2);
		cout << conta; break;

	}
	case 4:
	{
		conta = subtra��o(numero1, numero2);
		cout << conta; break;
	}
	}
}