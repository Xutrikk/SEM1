#include <iostream>

#include "index.h"

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int choice;

	do {
		cout << "\n���� ������� �����:\n";
		cout << "1 � ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������.\n";
		cout << "2 � ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������.\n";
		cout << "3 � ����� � ������� ���� �������, ���������������� ��������� �����.\n";
		cout << "4 � ����� �� ���������.\n";
		cout << "\n��� �����: ";
		cin >> choice;

		switch (choice) {
		case 1:
			case1();
			break;
		case 2:
			case2();
			break;
		case 3:
			case3();
			break;
		case 4:
			cout << "��������� ���������"; break;
		default:
			cout << "������\n"; break;
		}

	} while (choice != 4);
	return 0;
}