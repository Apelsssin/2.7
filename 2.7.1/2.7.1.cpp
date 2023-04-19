#include <iostream>
#define MODE 1
#ifndef MODE
#error "Необходимо определить MODE"
#endif
#if (MODE == 1)
int add(int x, int y) { return x + y; }
#endif
int main()
{
    setlocale(LC_ALL, "Russian");
#if MODE == 0
    std::cout << "Работаю в режиме тренировки\n";
#elif MODE == 1
    std::cout << "Работаю в боевом режиме\n";
    std::cout << "Введите число 1: ";
    int x;
    std::cin >> x;
    std::cout << "Введите число 2: ";
    int y;
    std::cin >> y;
    std::cout << "Результат сложения: " << add(x, y);
#else
#error "Неизвестный режим. Завершение работы"
#endif
}
