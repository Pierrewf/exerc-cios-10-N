#include<iostream>
using namespace std;

int main()
{
int C ,c, F, f,Valor;
char Graus;
cout<<"   você gostaria de ver os Graus em celsius(C) ou fahrenheit(F)\n";
cin>> Graus;
cout<< "me de o valor que gostaria de ver\n";
cin>> Valor;
switch (Graus)
{
case 'C':
case 'c':
(Graus==C||c);
cout<< Valor<< "Celsius\n";
cout<< "em fahrenheit\n"<<(Valor * 1.8 + 32)<<"°";break;
case 'F':
case 'f':
(Graus==F||f);
cout<< Valor<< "fahrenheit\n";
cout<< "em celsius"<<(Valor - 32)*5/9<<"°";break;
default:
cout<<"isso não é Graus bobao\n";
break;
}
}




