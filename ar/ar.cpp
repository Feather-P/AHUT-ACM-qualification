#include <cmath>
#include <iostream>
int main() {
    double distance;
    std::cin >> distance;
    int step = 0;
    double progress = 0;
    for (; progress < distance; step++) {
        progress += 2* std::pow(0.98, step);
    }
    std::cout << step;
}