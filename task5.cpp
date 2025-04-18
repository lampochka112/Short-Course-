#include <iostream>

int main() {
    int n;
    std::cout << "Введите количество чисел Фибоначчи: ";
    std::cin >> n;
    int a = 0, b = 1;
    std::cout << "Числа Фибоначчи: ";
    for (int i = 0; i < n; i++) {
        std::cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }