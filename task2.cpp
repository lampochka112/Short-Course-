#include <iostream>

int main() {
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << num << " - четное число." << std::endl;
    } else {
        std::cout << num << " - нечетное число." << std::endl;
    }
    return 0;
}