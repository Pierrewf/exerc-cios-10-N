#include <iostream>
#include <locale.h>
using namespace std;

int soma(int a,int conta)
{
		a=a + conta;
	return a;
}
int divisão(int a,int conta)
{
	a = a / conta;
return a;
}
int multiplicação(int a,int conta )
{
	a = a * conta;
	return a;
}
int subtração(int a,int conta )
{
	a = a - conta;
	return a;
}
void main()
{
	setlocale(LC_ALL, "portuguese");
	int numero1, numero2, valor, conta;
	cout << "me de o 1º numero: ";
	cin >> numero1;
	cout << "me de o 2º numero: ";
	cin >> numero2;
	cout << "agora escolha a conta que quer fazer | 1 - soma | 2 - divisão | 3 - multiplicação | 4 - subtração | 0 - sair |\n";
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
		conta = divisão(numero1, numero2);
		cout << conta; break;
	}
	case 3:
	{
		conta = multiplicação(numero1, numero2);
		cout << conta; break;

	}
	case 4:
	{
		conta = subtração(numero1, numero2);
		cout << conta; break;
	}
	}
}