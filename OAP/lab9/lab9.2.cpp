#include <iostream>//Подключение библиотеки для работы с вводом/выводом
void main()
{
	using namespace std;// Использование пространства имен std
	setlocale(LC_CTYPE, "Russian");//Функция, с помощью которой корректно отображается русский язык
	double a = -2, b = -1, e = 0.0001, x;//Ввод данных
	while (abs(a - b) > (2 * e))
	{
		x = (a + b) / 2;
		if ((sin(a) + 2 + a) * (sin(x) + 2 + x) <= 0) b = x;
		else a = x;
	}
	cout << "x = " << x << endl;//Вывод на экран 
}
