﻿#include <iostream> //подключение библиотеки ввода-вывода
#include <ctime> //подключение библиотеки времени
#include <stdio.h>	//подключение библиотеки ввода-вывода
#include <stdlib.h> //подключение библиотеки стандартных функций
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");  // Установка локали на русский язык
	const int N = 10; //константа N равна 10
	int sz = 10; //переменная sz равна 10
	int* ptr, i, n, count = 0, A[N]; //указатель ptr, переменные i, n, count равны 0, массив A размера N
	float sum = 0, c; //переменная sum равна 0, переменная c типа float
	cout << ("Введите C=:"); //вывод на экран сообщения "Введите C=:"
	cin >> c; //ввод значения переменной c
	srand((unsigned)time(NULL)); //генерация случайного числа
	int rmn = -10, rmx = 10; //переменные rmn и rmx равны -10 и 10 соответственно
	printf("Введите размер массива, sz < 10 \n"); //вывод на экран сообщения "Введите размер массива, sz < 10"
	scanf_s("%d", &sz); //ввод значения переменной sz

	if (!(ptr = (int*)malloc(sz * sizeof(int)))) //если память не выделена
	{
		puts("Not enough memory"); //вывод на экран сообщения "Not enough memory"
		return 0; //выход из программы
	}


	cout << "Массив:" << endl; //вывод на экран сообщения "Массив:"
	srand((unsigned)time(NULL)); //генерация случайного числа
	for (i = 0; i < sz; i++) //цикл от 0 до sz
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn); //заполнение массива случайными числами
		cout << A[i] << endl; //вывод на экран элементов массива
	}

	for (i = 0; i < sz; i++) //цикл от 0 до sz
		if (A[i] < c) { //если элемент массива меньше c
			count++; //увеличиваем счетчик на 1
		}
	cout << ("Количество элементов меньших C:") << count << endl; //вывод на экран количества элементов меньших c

	for (i = 0; i < sz; i++) //цикл от 0 до sz
		if (A[i] < 0) { //если элемент массива меньше 0
			n = i; //присваиваем переменной n значение i
		}

	for (n; n < sz; n++) //цикл от n до sz
	{
		sum += int(A[n]); //суммируем элементы массива
	}
	cout << ("Сумма элементов расположенных после отрицательного: ") << sum << endl; //вывод на экран суммы элементов после отрицательного
	for (i = 0; i < n; i++) //цикл от 0 до n
		printf("%d ", *(ptr + i)); //вывод на экран элементов массива

	free(ptr); //освобождение памяти
}