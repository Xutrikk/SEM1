#include <iostream>//Подключение библиотеки для работы с вводом/выводом
void main()
{
	using namespace std;// Использование пространства имен std
	setlocale(LC_CTYPE, "Russian");//Функция, с помощью которой корректно отображается русский язык
	double h, x, s = 0, a = 2, b = 7, n = 200;//Ввод данных
	h = (b - a) / n;
	x = a;
	for (x; x < (b - h); x += h)
	{
		s = s + h * (pow(sin(x), 2) + 1 + pow(sin(x + h), 2) + 1);
		x = x + h;
	}
	cout << "s = " << s << endl;//Вывод на экран 
}