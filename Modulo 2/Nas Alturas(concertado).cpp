#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int alunos[2][5],contarI=0, contarA=0,i,media,contar=0;
	for ( i = 0; i < 5; i++)
	{
		cout << "me de a idade do " << i + 1 << "º aluno\n";
		cin >> alunos[0][i];
		cout << "me de a altura do " << i + 1 << "º aluno\n";
		cin >> alunos[1][i];
	}
	for ( i = 0; i < 5; i++)
	{
		if (alunos[0][i] >= 13)
		{
			contarI++;
			contarA += alunos[1][i];
		} 
	}
	media = contarA / contarI;
	cout << "alunos com mais de 13 " << contarI<<"\n";
	cout << "a media de altura desses alunos é de " << media<<"\n";
	for (i = 0; i < 5; i++)
	{
		if (alunos[1][i] < media)
		{
			contar++;
		}
	}
	cout << "numeros de alunos com mais de 13 anos com altura menor que a media " << contar;
}	