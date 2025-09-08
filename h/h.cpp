#include <iomanip>
#include <ios>
#include <iostream>
int main() {
    double total;
    int person;
    std::cin >> total >> person;
    int cups = person * 2;
    double single = total / person;
    std::cout << std::fixed << std::setprecision(3) << single << "\n" << cups;
}