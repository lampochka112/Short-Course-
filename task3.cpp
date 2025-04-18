#include <iostream>

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;
    std::cout << "Факториал " << num << " равен " << factorial(num) << std::endl;
    return 0;
}