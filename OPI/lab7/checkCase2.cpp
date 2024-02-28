#include <iostream>
#include <Windows.h>

#include "index.h"

using namespace std;

int case2() {
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int N = 100;
	char a;
	int s;
	char* mas = new char[N];

	cout << "������� ���������� ���� ��� ��������: ";
	cin >> s;
	cout << "������� �����(�) �������� ��������: ";

	for (int i = 0; i < s; i++) {
		cin >> mas[i];
	}

	for (int i = 0; i < s; i++) {
		a = mas[i];
		if ('�' <= a && a <= '�' || a == '�' || a == '�') {
			int resualt = getdiff(a);
			cout << "������� �������� ����� � Windows-1251 ����� " << a << " � ��������� � �������� ���������: " << resualt << endl;
		}
		else {
			cout << "������\n";
		}

	}

	delete[] mas;
	return 0;
}