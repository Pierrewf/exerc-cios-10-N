#include <iostream>
#include <locale.h>
using namespace std;
float resultado;
float conta;
int pessoas;
int media(int a,float b)
{
	resultado = resultado + b / a;
	return resultado;
}
void main()
{
	
	cin >> pessoas;
		cin >> conta;
		media(pessoas, conta);
		cout << "cada pessoa vai pagar: " << resultado;
}