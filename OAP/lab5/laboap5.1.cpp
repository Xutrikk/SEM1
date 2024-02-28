#include <iostream>

int main() {
    int A, B, C, D;
    std::cout << "Введите целые числа A, B, C и D: ";
    std::cin >> A >> B >> C >> D;

    if (A % 2 == 0  B % 2 == 0  C % 2 == 0 || D % 2 == 0) {
        std::cout << "Среди заданных чисел есть хотя бы одно четное число. \n";
    }
    else {
        std::cout << "Среди заданных чисел нет четных чисел. \n";
    }

    return 0;
}