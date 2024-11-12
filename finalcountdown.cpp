#include <iostream>
using namespace std;
int main()
{
	int numb;
	do {
		cout << "me diga um numero ";
		cin >> numb;
	} while (numb < 0 || numb>100);
		for (int i = numb; i > 0; i--)
		{
			if (i % 2 > 0)
			{
				cout << "\n";
				cout << i;

			}
		}
	
}