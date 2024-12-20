#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int i,j,quantos;
	char frase[100];
	char abc[26] = {'a','e','i','o','u','r','b','c','d','f','g','h','j','k','l','m','n','p','q','s','t','v','w','x','y','z'};
	string abc1[26] = { "apa","epe","ipi","opo","upu","r","b","c","d","f","g","h","j","k","l","m","n","p","q","s","t","v","w","x","y","z" };
	cout << "quantas palavras tem a frase?";
	cin >> quantos;
	cout << "Me de uma frase para tarduzir para lingua do p ";
	for (i = 0; i < quantos; i++)
	{
		cin >> frase[i];
		for(j=0;j<26;j++)

			if (frase[i] == abc[j])
			{
				cout << abc1[j];
		
			}
		
	}
	
}