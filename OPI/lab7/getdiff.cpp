#include <iostream>

int getdiff(char a) {
	int uppercaseCode = toupper(a); // Прописная буква X
	int lowercaseCode = tolower(a); // Строчная буква x
	int diff = lowercaseCode - uppercaseCode;
	return diff;
}