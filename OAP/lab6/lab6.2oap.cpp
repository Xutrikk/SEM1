﻿#include <iostream>//Подключение библиотеки для работы с вводом/выводом
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");//Функция, с помощью которой корректно отображается русский язык
	float z, w, a = 1, y = 0.4, t = 3, j;//Ввод переменных 
	while (t < 4.1) {// проверка условия,j должно быть меньше 4.1
		for (int n = 0; n < 3; n++)//В переменной n находится номер значения j из массива. Вычисляется выражение n = 0 и проверяется условие n < 3. Если оно истинно, то выполняются операторы цикла.
		{
			printf("Введите j ");
			scanf_s("%f", &j);//ввод данных
			z = sqrt(t * a + y) + 4 * exp(-2 * j);// запись формулы для вычисления z
			w = log(0.4 * y) / (7 * a - z);// запись формулы для вычисления w
			printf("z = %5.1f\t", z);// вывод значения переменной, отступ после ввода значения переменной
			printf("w = %5.1f\n", w);;// вывод значения переменной, перейти на новую строку после ввода значения переменной
		}
		t = t + 0.2; }//t меняется  с шагом в +0.2
}
