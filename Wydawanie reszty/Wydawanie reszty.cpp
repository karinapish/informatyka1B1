﻿#include <iostream>
using namespace std;

int main() {
	int nominaly[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int kwota;
	cout << "Podaj reszte do wyplacenia: ";
	cin >> kwota;
	int ile;
	int i;
	i = 0;
	while (kwota > 0) {
		if (kwota >= nominaly[i]) {
			ile = kwota / nominaly[i];
			kwota = kwota - (nominaly[i] * ile);
			cout << nominaly[i] << "x" << ile << endl;
		}
		i = i + 1;
	}
	return 0;
}

