#include <iomanip>//Подключение для форматирования вывода данных
#include <iostream>//Подключение библиотеки для работы с вводом/выводом
using namespace std;//Включение пространства имен std

int main()
{
	setlocale(LC_CTYPE, "Russian");//Функция,с помощью которой корректно отображается русский язык
	char c, probel;
	probel = ' ';
	cout << "Введите символ ";
	cin >> c;
	 
	//Выводим пробелы и символы с использованием setw и setfill
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	return 0;
}
