#include <iomanip>
#include <ios>
#include <iostream>
int main() {
    int costs;
    float money = 0;
    std::cin >> costs;
    if (costs <= 150) {
        money += costs*0.4463;
    } else if (costs >150 && costs < 400) {
        money = 150*0.4463 + (costs-150)*0.4663;
    } else {
        money = 150*0.4463 + 250*0.4663 + (costs-400)*0.5663;
    }

    std::cout << std::fixed << std::setprecision(1) << money;
}