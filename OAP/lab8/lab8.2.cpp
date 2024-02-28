#include <iostream>//Подключение библиотеки для работы с вводом/выводом
int main() {
    using namespace std;//Использование пространства имен std
    setlocale(LC_CTYPE, "Russian");//Функция, с помощью которой корректно отображается русский язык
    int numbers, summa = 0, number;
    cout << "Введите количество чисел" << endl;//Вывод на экран
    cin >> numbers;
    for (int i = 1; i <= numbers; i++) {
        cout << "Введите " << i << " число" << endl;//Вывод на экран
        cin >> number;
        if (i % 2 == 0) {
            summa += number;
        }
    }
    cout << "Сумма четных элементов равна: " << summa << endl;//Вывод на экран
    return 0;//Завершает выполнение функции и возвращает системе значение 0
    
}

