#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int medAlcoMl;
    int travelKit;
    std::cout << "Введите количество медицинского спирта в мл: ";
    std::cin >> medAlcoMl;
    std::cout << "Введите количество походных аптечек: ";
    std::cin >> travelKit;
    if (medAlcoMl < 2000 || travelKit < 5) {
        std::cout << "Недостаточно, пожалуйста, пополните запас медикаментов!";
    } else {
        std::cout << "Достаточно";
    }
}

