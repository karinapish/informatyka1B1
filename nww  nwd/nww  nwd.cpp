#include <iostream>
using namespace std;

int main()
{
	cout << "Wprowadz pierwszą liczbę: ";
	int a;
	cin >> a;
	cout << "Wprowadz drugą liczbę: ";
	int b;
	cin >> b;
	int iloczyn = a * b;
	while (a != b)
	{
		if (a < b)
			b = b - a;
		else  a = a - b;
	}                         // obliczony nwd
	int nww = iloczyn / a;
	cout << nww;              // obliczony nww

	return 0;
	
}

