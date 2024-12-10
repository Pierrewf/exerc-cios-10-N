#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int numero, i, quantidade, j, pos;
	string frase[100];
	char abc[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	cout << "me de a tamanho da frase ";
	cin >> quantidade;
	cout << "me de o deslocamento ";
	cin >> numero;
	cout << "me de a frase\n";

	for (i = 0; i < quantidade; i++)
	{
		cin >> frase[i];
	}
	for (i = 0; i < quantidade; i++)
	{
		for (j = 0; frase[i][j] != '\0'; j++)
		{
			if (frase[i][j] >= 'a' && frase[i][j] <= 'z')
			{
				pos = frase[i][j] - 'a';
				pos = (pos + numero) % 26;
				frase[i][j] = abc[pos];
			}

		}  
	}
    cout << "a frase criptografada e\n";
	for (i = 0; i < quantidade; i++) {
		cout << frase[i] << " ";
	}
	
}