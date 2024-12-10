#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int i, graus[12], contar = 0, media = 0,contar2=0;
	string mes[] = { "janeiro ","fevereiro ","março ","abril ","maio ","junho ","julho ","agosto ","setembro ","outubro ","novembro ","dezembro"};
	for (i = 0; i < 12; i++)
	{
		cout << "me de os graus do mes \n"<<mes[i]<<"\n";
		cin >> graus[i];
	}
	for (i = 0; i < 12; i++)
	{
		contar +=graus[i] ;
	}
	media = contar / 12;
	cout << "a media climatica anual foi de " << media<<" graus\n";
	cout << "os meses acima da media foram os\n";
	for (i = 0; i < 12; i++)
	{
		if (graus[i] > media)
		{
			 cout<<mes[i] << ": " << graus[i] << " graus\n"<<<<;
		}
	}


}