#include <iostream>//Подключение библиотеки для работы с вводом/выводом
void main() {
	using namespace std;// Использование пространства имен std
	setlocale(LC_CTYPE, "Russian");//Функция, с помощью которой корректно отображается русский язык
	const int n = 10;
	int F[n], D[n], sum, a = 0, i, size;

	cout << "Массив F: " << endl;//Вывод на экран
	for (i = 0; i < n; i++)
	{
		*(F + i) = rand() % 100;
		cout << " " << F[i];
	}
	cout << endl;
	cout << "Массив D: " << endl;//Вывод на экран
	for (i = 0; i < n; i++)
	{
		*(D + i) = rand() % 100;
		cout << " " << D[i];
	}

	int max = -99;
	for (i = 0; i < n; i++)
	{
		if (F[i] > max)
		{
			max = F[i];
		}
	}
	cout << endl;
	cout << "Max = " << max << std::endl;//Вывод на экран
	for (i = 0; i < n; i++)
	{
		if (D[i] == max)
		{
			a = 1;
		}
	}
	if (a == 1)
	{
		cout << "есть";//Вывод на экран
	}
	if (a == 0)
	{
		cout << "нет";//Вывод на экран
	}
}