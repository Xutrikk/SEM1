#include <iostream>//Подключение библиотеки для работы с вводом/выводом
int main()
{
	using namespace std;// Использование пространства имен std
	setlocale(LC_CTYPE, "Russian");//Функция, с помощью которой корректно отображается русский язык
	const int N = 100;
	int i, sz, A[N];
	int rmn = -60, rmx = 99;
	int k = 3;
	cout << "Введите размер массива ";//Вывод на экран 
	cin >> sz;
	cout << "Массив А:" << endl;//Вывод на экран 
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
	}
	for (int i = 0; i < sz; i++)
	{
		cout << "A[" << i << "]" << "\t" << A[i] << endl;//Вывод на экран 
	}
	cout << endl;
	cout << "Удаляем элементы массива,индексы которых кратны 3:" << endl;//Вывод на экран 
	for (i = 0; i < sz; i++)
	{
		if (i % 3 == 0)
		{
			k = 0;
			for (i = 1; i < sz; i++)
			{
				if ((i + k) % 3 == 0)
				{
					k++;
					sz--;
				}
				A[i] = A[i + k];
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		cout << "A[" << i << "]" << "\t" << A[i] << endl;//Вывод на экран 
	}
	cout << endl;
	cout << "Вставляем после отриц. элементов 10:" << endl;//Вывод на экран 
	for (i = 0; i < sz; i++)
	{
		if (A[i] < 0)
		{
			A[i + 1] = 10;
			sz++;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		cout << "A[" << i << "]" << "\t" << A[i] << endl;//Вывод на экран 
	}
	cout << endl;
}