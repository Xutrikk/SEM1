#include <iostream>

#include "index.h"

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int choice;

	do {
		cout << "\nƒаны четырее опции:\n";
		cout << "1 Ц определение разницы значений кодов в ASCII буквы в прописном и строчном написании.\n";
		cout << "2 Ц определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании.\n";
		cout << "3 Ц вывод в консоль кода символа, соответствующего введенной цифре.\n";
		cout << "4 Ц выход из программы.\n";
		cout << "\n¬аш выбор: ";
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
			cout << "ѕрограмма завершена"; break;
		default:
			cout << "ќшибка\n"; break;
		}

	} while (choice != 4);
	return 0;
}