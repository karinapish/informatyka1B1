// liczbapierwsza.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Ile liczb pierwszych chcesz wyswietlic:";
	cin >> n;
	int lp = 0;
	int p = 2;
	long l1;
	bool m = true;
	while (lp < n)
	{
		m = true;
		for(int d=2; d <=p-1; d++){
			if (p % d == 0) {
				m = false;
			}
		}
		if (m == true) {
			cout << p<<" ";
			lp = lp + 1;
		}
		p = p + 1;
		
	}
	return 0;
}