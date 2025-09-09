#include <iostream>

bool is_r(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        return true;
    }
    if (year % 100 == 0 && year % 400 == 0) {
        return true;
    }
    return false;
}

int main() {
    int year;
    std::cin >> year;
    std::cout << is_r(year);
}