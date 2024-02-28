#include <iostream>//Подключение библиотеки для работы с вводом/выводом
int main() {
    using namespace std;// Использование пространства имен std
    setlocale(LC_CTYPE, "Russian");//Функция, с помощью которой корректно отображается русский язык
    const int MAX_SIZE = 100;
    double sequence[MAX_SIZE];
    int n;
    cout << "Введите количество элементов последовательности: ";//Вывод на экран 
    cin >> n;
    cout << "Введите элементы последовательности: ";//Вывод на экран 
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }
    double min = std::numeric_limits<double>::max();
    double max = std::numeric_limits<double>::min();
    int min_index = -1;
    int max_index = -1;
    for (int i = 0; i < n; ++i) {
        if (sequence[i] < min) {
            min = sequence[i];
            min_index = i;
        }
        if (sequence[i] > max) {
            max = sequence[i];
            max_index = i;
        }
    }
    int count = 0;
    if (min_index < max_index) {
        for (int i = min_index + 1; i < max_index; ++i) {
            ++count;
        }
    }
    else {
        for (int i = max_index + 1; i < min_index; ++i) {
            ++count;
        }
    }
    cout << "Количество элементов между минимальным и максимальным значениями: " << count <<endl;
    return 0;//Завершает выполнение функции и возвращает системе значение 0   
}


