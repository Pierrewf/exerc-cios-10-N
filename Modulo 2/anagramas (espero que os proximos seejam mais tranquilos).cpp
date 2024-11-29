#include <iostream>
using namespace std;
int main()
{
	int i, quantidade, j, contar1[26] = { 0 }, contar2[26] = { 0 };
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
	for (i = 0; i < quantidade; i++)
	{

		for (j = 0; j < 26; j++)
		{
			if (palavras2[i] == palavras1[j])
			{
				contar1[j]++;

			}

		}
	}
	for (i = 0; i < quantidade; i++)
	{

		for (j = 0; j < 26; j++)
		{
			if (palavras1[i] == palavras2[j])
			{
				contar2[j]++;

			}

		}
	}
	for (i = 0; i <1; i++)
	{
		if (contar1[i] == contar2[i])
		{
			cout << "a palavra e um anagrama";
		}
		else
		{
			cout << "a palavra nao e um anagrama";
		}
	}

}