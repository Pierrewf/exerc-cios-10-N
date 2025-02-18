#include <iostream>
#include <locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "portuguese");
	int euros, centimos, i, j;
	float pagar[8] = { 0,0,0,0,0,0,0,0 }, valor,falta=0, valor_pagamento = 0, pagamentoeuro, pagamentocent, mycoins[8] = { 2,1,0.50,0.20,0.10,0.05,0.02,0.01 }, pagamento[8] = { 0,0,0,0,0,0,0,0 }, troco = 0;
	cin >> pagamentoeuro;
	cin >> pagamentocent;
	valor = pagamentoeuro + (pagamentocent / 100);
	cout << valor;
	cout << "\n";
	for (j = 0; j < 8; j++)
	{
		cin >> pagamento[j];
		valor_pagamento = valor_pagamento + pagamento[j] * mycoins[j];
		
	}
	
		if (valor_pagamento < valor)
		{
			for (i = 0; i < 1; i++)
			{
				falta = falta + (valor - valor_pagamento);
				cout << "compra nao realizada, valor incompleto, falta: " << falta << "$ "; break;
			}
		}
	
	if (valor_pagamento > valor)
	{
		troco = valor_pagamento - valor;
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				if (troco > mycoins[i])
				{
					troco = troco - mycoins[i];
					pagar[i]++;


				}
			}
		}
		for (i = 0; i < 8; i++)
		{
			cout << pagar[i] << " ";
		}
	}


}