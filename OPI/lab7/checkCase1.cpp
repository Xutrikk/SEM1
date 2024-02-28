#include <iostream>
#include <Windows.h>

#include "index.h"

using namespace std;

int case1() {
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int N = 100;
	char a;
	int s;
	char* mas = new char[N];

	cout << "������� ���������� ���� ��� ��������: ";
	cin >> s;
	cout << "������� �����(�) ���������� ��������: ";

	for (int i = 0; i < s; i++) {
		cin >> mas[i];
	}

	for (int i = 0; i < s; i++) {
		a = mas[i];

		if (0x41 <= a && a < 0x5B || 0x60 < a && a < 0x7B) {
			int resualt = getdiff(a);
			cout << "������� �������� ����� � ASCII ����� " << a << " � ��������� � �������� ���������: " << resualt << endl;
		}
		else {
			cout << "������\n";
		}

	}

	delete[] mas;
	return 0;
}