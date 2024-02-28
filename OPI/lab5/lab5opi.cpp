#include <iostream> 
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "Russian");
    char choice;
    do {
        cout << "Выберите вариант использования:\n";
        cout << "1 - определение разницы значений кодов в ASCII буквы латинского алфавита\n";
        cout << "2 - определение разницы значений кодов в Windows-1251 буквы русского алфавита\n";
        cout << "3 - вывод в консоль кода символа, соответствующего введенной цифре\n";
        cout << "4 - выход\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case '1': {
            char x;
            cout << "Введите букву X: ";
            cin >> x;
            if ((x >= 0x41) && (x <= 0x5A) || (x >= 0x61) && (x <= 0x7A))
            {
                int up = toupper(x);
                int low = tolower(x);
                int diff = low - up;
                cout << "Разница значений кодов в ASCII для буквы " << x << ": " << diff << endl;
                break;
            }
            else
            {
                cout << "Введена не буква латинского алфавита";
                break;
            }
        }
        case '2': {
            char y;
            cout << "Введите букву Y: ";
            cin >> y;

            // Проверка на русскую букву в кодировке Windows-1251
            if ((y >= -64) && (y <= -1))
            {
                int uppercaseCode =toupper(y); // Прописная буква Y
                int lowercaseCode =tolower(y); // Строчная буква y
                int diff = lowercaseCode - uppercaseCode;
                cout << "Разница значений кодов в Windows-1251 для буквы " << y << ": " << diff << endl;
                break;
            }
            else
            {
                cout << "Введена не буква русского алфавита";
                break;
            }
        }
        case '3': {
            int z;
            cout << "Введите десятичную цифру Z: ";
            cin >> z;
            if (z >= 0 && z <= 9)
            {
                int digit = '0' + z;
                cout << "Код символа, соответствующего цифре " << z << " в Windows-1251: " << digit << endl;
                break;
            }
            else
            {
                cout << "Введена не цифра";
                break;
            }
        }
        case '4': {
            cout << "Программа завершена.\n";
            break;
        }
        default:
            cout << "Неверный выбор. Пожалуйста, выберите правильный вариант.\n";
        }

        cout << endl;
    } while (choice != '4');

    return 0;
}