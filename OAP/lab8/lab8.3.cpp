#include <iostream>//Подключение библиотеки для работы с вводом/выводом
int main() {
    using namespace std;// Использование пространства имен std
    setlocale(LC_CTYPE, "Russian");//Функция, с помощью которой корректно отображается русский язык
    int numbers, number, nomer = 0;
    cout << "Введите количество чисел" << endl;//Вывод на экран 
    cin >> numbers;
    for (int i = 1; i <= numbers; i++) {
        cout << "Введите " << i << " число" << endl;//Вывод на экран 
        cin >> number;  
        if (number < 0) {
            nomer = i;
        }
    }
    if (nomer == 0) {
        cout << "Нету отрицательных чисел" << endl;//Вывод на экран     
    }
    else {
        cout << "Номер последнего отрицательного элемента: " << nomer << endl;//Вывод на экран    
    }
    return 0;//Завершает выполнение функции и возвращает системе значение 0   
}
