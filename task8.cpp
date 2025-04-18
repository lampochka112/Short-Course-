#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Введите строку: ";
    std::cin >> str;
    std::string reversed = std::string(str.rbegin(), str.rend());
    if (str == reversed) {
        std::cout << "\"" << str << "\" - палиндром." << std::endl;
    } else {
        std::cout << "\"" << str << "\" - не палиндром." << std::endl;
    }
    return 0;
}