#include <iostream>//Подключение библиотеки для работы с вводом/выводом
#include <ctime>
void main()
{
	using namespace std;// Использование пространства имен std
	setlocale(LC_CTYPE, "Russian");//Функция, с помощью которой корректно отображается русский язык
	srand(time(NULL));
	int n, rmx = 100, rmn = -100;
	const int sz = 1000;
	int A[sz] = {};
	cout << "Размер массива: ";//Вывод на экран
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		*(A + (i)) = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << "A[" << i << "]" << "\t" << A[i] << endl;//Вывод на экран
	}
	cout << " " << endl;
	cout << "Массив после изменения: " << endl;//Вывод на экран
	for (int i = 0; i < n; i++)
	{
		if (*(A + (i)) > 0)
		{
			cout << *(A + (i)) << endl;//Вывод на экран
		}
	}
	for (int j = 0; j < n; j++)
	{
		if (*(A + (j)) < 0)
		{
			cout << *(A + (j)) << endl;//Вывод на экран
		}
	}
}
