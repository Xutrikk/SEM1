﻿#include <iostream>//Подключение библиотеки для работы с вводом/выводом
int main()
{
	using namespace std;//Использование пространства имен std
	setlocale(LC_CTYPE, "Russian");//Функция, с помощью которой корректно отображается русский язык
	double x, q, sum = 0, t = 0.45;//Ввод данных
	for (int n = 1; n <= 6; n++)//В переменной n находится номер значения x из массива. Вычисляется выражение n = 1 и проверяется условие n <= 6. Если оно истинно, то выполняются операторы цикла
	{
		cout << "Введите x = "; cin >> x;
		x = (x + 1) / x;
		sum += x;
	}
	q = sum + t;
	cout << "q = " << q;//Вывод на экран
	return 0;//Завершает выполнение функции и возвращает системе значение 0
}
