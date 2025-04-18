#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cout << "Введите количество элементов: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Введите элементы: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::sort(arr, arr + n);
    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}