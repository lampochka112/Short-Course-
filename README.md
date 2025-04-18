# Short-Course
# Краткий курс по C++

Этот курс предназначен для начинающих, которые хотят изучить основы языка программирования C++. Он состоит из нескольких разделов, каждый из которых охватывает ключевые концепции.

## Структура курса

- [Введение](01_Introduction/README.md)
- [Переменные и типы](02_Variables_and_Types/README.md)
- [Управляющие структуры](03_Control_Structures/README.md)
- [Функции](04_Functions/README.md)
- [Объектно-ориентированное программирование](05_OOP/README.md)
- [Заключение и финальный проект](06_Conclusion/README.md)

## Установка

Для начала работы с C++ вам нужно установить компилятор. Рекомендуется использовать [g++](https://gcc.gnu.org/) или [Visual Studio](https://visualstudio.microsoft.com/).


#### 3. `01_Introduction/hello_world.cpp`

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}



# Переменные и типы

В C++ вы можете объявлять переменные различных типов, таких как `int`, `float`, `char` и `string`.

## Пример

```cpp
#include <iostream>
#include <string>

int main() {
    int age = 25;
    std::string name = "Alice";
    std::cout << name << " is " << age << " years old." << std::endl;
    return 0;
}



#### 5. `02_Variables_and_Types/variables.cpp`

```cpp
#include <iostream>
#include <string>

int main() {
    int age = 25;
    std::string name = "Alice";
    std::cout << name << " is " << age << " years old." << std::endl;
    return 0;
}


# Управляющие структуры

C++ поддерживает различные управляющие структуры, такие как `if`, `for`, и `while`.

## Пример

```cpp
#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteration " << i << std::endl;
    }
    return 0;
}


#### 7. `03_Control_Structures/control_structures.cpp`

```cpp
#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteration " << i << std::endl;
    }
    return 0;
}


# Функции

Функции позволяют организовать код и повторно использовать


# Заключение

Поздравляем! Вы завершили краткий курс по C++. Теперь вы знакомы с основами языка, включая переменные, типы данных, управляющие структуры, функции и объектно-ориентированное программирование.

## Финальный проект

В качестве финального проекта вы можете создать простое приложение, которое использует все изученные концепции. Например, вы можете создать консольное приложение для управления списком задач.

### Пример кода

```cpp
#include <iostream>
#include <vector>
#include <string>

class Task {
public:
    std::string name;
    bool completed;

    Task(std::string n) : name(n), completed(false) {}
};

class TaskManager {
private:
    std::vector<Task> tasks;

public:
    void addTask(std::string name) {
        tasks.push_back(Task(name));
    }

    void completeTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
        }
    }

    void showTasks() {
        for (int i = 0; i < tasks.size(); i++) {
            std::cout << (tasks[i].completed ? "[X] " : "[ ] ") << tasks[i].name << std::endl