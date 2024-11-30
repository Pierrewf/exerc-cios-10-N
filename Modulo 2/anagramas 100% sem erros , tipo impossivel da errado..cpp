#include <iostream>
using namespace std;
int main()
{
	int i, quantidade, j, alfabeto1[26] = { 0 }, alfabeto2[26] = { 0 };
	char alfabeto[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char palavras1[100], palavras2[100];
	cout << "quantas letras quer usar?";
	cin >> quantidade;
	cout << "me de letras\n";
	for (i = 0; i < quantidade; i++)
	{
		cin >> palavras1[i];
	}
	cout << "me de letras\n";
	for (i = 0; i < quantidade; i++)
	{
		cin >> palavras2[i];
	}
	// compare cada letra da palavra 1 com alfabeto
	for (i = 0; i < quantidade; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (palavras1[i] == alfabeto[j])
			{
				alfabeto1[j] = alfabeto1[j] + 1;

			}
		}
	}
	// compare cada letra da palavra 2 com alfabeto
	for (i = 0; i < quantidade; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (palavras2[i] == alfabeto[j])
			{
				alfabeto2[j] = alfabeto2[j] + 1;

			}
		}
	}
	int ok = 1;
	// compara a contagem da palavra 1 e a contagem da palavra 2 , se aparece qualquer diferença ele sabe.
	for (j = 0; j < 26; j++)
	{
		if (alfabeto1[j] != alfabeto2[j])
		{
			ok = 0;
		}
	}
	if (ok == 1)
	{
		cout << "a palavra e um anagrama";

	}
	else
	{
		cout << "a palavra nao e um anagrama";
	}
}