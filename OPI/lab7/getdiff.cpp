#include <iostream>

int getdiff(char a) {
	int uppercaseCode = toupper(a); // ��������� ����� X
	int lowercaseCode = tolower(a); // �������� ����� x
	int diff = lowercaseCode - uppercaseCode;
	return diff;
}