﻿#include <iostream>  // Подключение библиотеки для ввода-вывода
#include <ctime>  // Подключение библиотеки для работы со временем
using namespace std;  // Использование пространства имен std
int main()  // Главная функция программы
{
	setlocale(LC_ALL, "RUS");  // Установка локали для корректного отображения кириллицы
	int N, i, j, ** mass;  // Объявление переменных
	cout << "Введите размер матрицы N: ";  // Вывод сообщения о вводе размера матрицы
	cin >> N;  // Ввод размера матрицы
	srand((unsigned)time(NULL));  // Инициализация генератора случайных чисел
	mass = new int* [N];  // Выделение памяти под массив указателей

	cout << "Матрица: " << endl;  // Вывод сообщения о матрице
	for (i = 0; i < N; i++)  // Цикл по строкам матрицы
		mass[i] = new int[N];  // Выделение памяти под каждую строку матрицы
	for (i = 0; i < N; i++)  // Цикл по строкам матрицы
		for (j = 0; j < N; j++)  // Цикл по столбцам матрицы
			mass[i][j] = rand() % 11 - 5;  // Заполнение матрицы случайными числами от -5 до 5

	for (i = 0; i < N; i++)  // Цикл по строкам матрицы
	{
		for (j = 0; j < N; j++)  // Цикл по столбцам матрицы
		{
			cout << mass[i][j] << "\t";  // Вывод элемента матрицы
		}
		cout << "\n";  // Переход на новую строку после вывода всех элементов строки
	}
	cout << "\n";  // Переход на новую строку после вывода всей матрицы
	bool zeroExists = false;  // Флаг, указывающий на наличие нулевого элемента в матрице
	for (i = 0; i < N; i++)  // Цикл по строкам матрицы
	{
		for (j = 0; j < N; j++)  // Цикл по столбцам матрицы
			if (mass[i][j] == 0)  // Если элемент матрицы равен нулю
			{
				zeroExists = true;  // Установка флага в true
				break;  // Прерывание цикла
			}
		if (zeroExists)  // Если флаг установлен в true
			break;  // Прерывание цикла
	}
	if (!zeroExists) {  // Если в матрице нет нулевых элементов
		for (i = 0; i < N; i++)  // Цикл по строкам матрицы
		{
			for (j = 0; j < N; j++)  // Цикл по столбцам матрицы
			{
				if (mass[i][j] < 0)  // Если элемент матрицы меньше нуля
				{
					mass[i][j] = 0;  // Замена элемента на ноль
				}
				cout << mass[i][j] << "\t";  // Вывод элемента матрицы
			}
			cout << "\n";  // Переход на новую строку после вывода всех элементов строки
		}
	}
	for (int k = 0; k < N; k++)  // Цикл по строкам матрицы
		delete[] mass[k];  // Освобождение памяти, выделенной под строку
	delete[] mass;  // Освобождение памяти, выделенной под массив указателей
}
