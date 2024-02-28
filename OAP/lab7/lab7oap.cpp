﻿#include <iostream>//Подключение библиотеки для работы с вводом/выводом
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");//Функция, с помощью которой корректно отображается русский язык
	float b, z, x = -0.004, s = 1.1, j = 4;//Ввод переменных 
	while (j < 7.1)// проверка условия,j должно быть меньше 7.1
	{

		b = 12 * s - exp(-s / 2) * (x - j);
		if (b < 1.5)//При каждом повторении программы в операторе проверяет условие в скобках
		{
			z = sqrt(-2 * x * j) + b;
		}
		else//Проверяет условие в скобках и в случае если условие не будет верным, то проверяет другое условие
		{
			z = abs(13 * x * j) + b;
		}
		cout << "b = " << b << endl;
		cout << "z = " << z << endl;
		cout << " " << endl;
		j = j + 0.5;
	}
	return 0;//Завершает выполнение функции и возвращает системе значение 0. 
}