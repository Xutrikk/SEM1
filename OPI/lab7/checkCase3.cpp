#include <iostream>
#include <Windows.h>

#include "index.h"

using namespace std;

int case3() {
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int N = 100;
	char a;
	int d, s;
	char* mas = new char[N];

	cout << "Введите количество цифр для проверки: ";
	cin >> s;
	cout << "Введите цифру(ы): ";

	for (int i = 0; i < s; i++) {
		cin >> mas[i];
	}

	for (int i = 0; i < s; i++) {
		a = mas[i];

		if ('0' <= a && a <= '9') {
			d = (int)a;
			cout << "Код символа, соответствующий цифре " << a << ": " << d << endl;
		}
		else {
			cout << "Ошибка\n";
		}

	}

	delete[] mas;
	return 0;
}