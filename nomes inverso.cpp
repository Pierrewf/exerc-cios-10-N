#include <iostream>
#include <string>
using namespace std;
int main()
{
	int  i;
	string nomes[5];
	cout << "me diga nomes diferentes\n";
	for (i=0; i < 5; i++)
	{
		cout << "nome n" << i + 1<<"\n";
		cin >> nomes[i];
	}
	for (i =4; i >=0; i--)
	{
		cout <<nomes[i]<<"\n";
	}
}
