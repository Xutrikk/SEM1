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

	cout << "������� ���������� ���� ��� ��������: ";
	cin >> s;
	cout << "������� �����(�): ";

	for (int i = 0; i < s; i++) {
		cin >> mas[i];
	}

	for (int i = 0; i < s; i++) {
		a = mas[i];

		if ('0' <= a && a <= '9') {
			d = (int)a;
			cout << "��� �������, ��������������� ����� " << a << ": " << d << endl;
		}
		else {
			cout << "������\n";
		}

	}

	delete[] mas;
	return 0;
}