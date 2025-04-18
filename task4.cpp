#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Введите строку: ";
    std::cin >> str;
    std::string reversed = std::string(str.rbegin(), str.rend());
    std::cout << "Обратная строка: " << reversed << std::endl;
    return 0;
}