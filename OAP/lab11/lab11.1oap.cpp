#include <iostream>//Подключение библиотеки для работы с вводом/выводом
int main()
{
    using namespace std;// Использование пространства имен std
    setlocale(LC_CTYPE, "Russian");//Функция, с помощью которой корректно отображается русский язык
    int A, n, p; char tmp[33];
    cout << "Введите число А ";//Вывод на экран
    cin >> A;
    cout << endl;
    _itoa_s(A, tmp, 2);
    cout << "Число в двоичном виде = " << tmp << endl;//Вывод на экран
    cout << " " << endl;
    cout << "Введите от какого бита начинать замену ";//Вывод на экран
    cin >> p;
    cout << endl;
    cout << "Скольно заменяем битов? ";//Вывод на экран
    cin >> n;
    cout << endl;
    unsigned int mask = (1 << p) - 1;
    for (int i = 0; i < n; i++) {
        A ^= mask;
        mask <<= 1;
    }
    _itoa_s(A, tmp, 2);
    cout << "Итоговое число = " << tmp << endl;//Вывод на экран
}

