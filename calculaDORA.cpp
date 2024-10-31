#include<iostream>
using namespace std;
int main()
{
int Numb1 , Numb2;
char Conta;
cout<<"me de o numero 1\n";
cin>> Numb1;
cout<<"me de o numero 2\n";
cin>> Numb2;
cout<<"escolha a forma da conta que queira fazer:\nsomar(+)\ndividir(/)\nmultiplicar(*)\nsubtrair(-)\n";
cin>> Conta;
switch (Conta)
{
case '+':
cout<<" O resultado da conta é\n"<< Numb1 + Numb2;break;
case '-':
cout<<" O resultado da conta é\n"<< Numb1-Numb2;break;
case '/':
cout<<" O resultado da conta é\n"<< Numb1/Numb2;break;
case '*':
cout<<" O resultado da conta é\n"<< Numb1*Numb2;break;
}
}
