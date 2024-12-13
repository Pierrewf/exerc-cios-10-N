#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL , "portuguese");
    string codigo[100],morse[26] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
    char abc[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    int numero,tamanho,i,j;
    char frase[100],opc;
    cout << "qual o tamanho da frase ";
    cin >> tamanho;
    cout << "como voce quer comparar\n";
    cout << "\nportugues para o morse = (1)/morse pro portugues = (2)\n";
    cin >> opc; 
    switch (opc)
    {
    case '1':
        cout << "me de a frase ";
        for (i = 0; i < tamanho; i++)
        {
            cin >> frase[i];
            for (j = 0; j < 26; j++)
            {
                if (frase[i] == abc[j])
                {
                    cout << morse[j] << " ";
                }
            }
        }break;
    case '2':
        cout << "me de a frase ";
        for (i = 0; i < tamanho; i++)
        {
            cin >> codigo[i];
            for (j = 0; j < 26; j++)
            {
                if (codigo[i] == morse[j])
                {
                    cout << abc[j]; break;
                }
            }
        }
    }
    }