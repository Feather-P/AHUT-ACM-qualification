#include <cmath>
#include <iomanip>
#include <iostream>
int main() {
    int n;
    std::cin >> n;
    double ans;
    ans = (std::pow(((1+std::sqrt(5))/2), n) - std::pow(((1-std::sqrt(5))/2), n)) / sqrt(5);
    std::cout << std::fixed << std::setprecision(2) << ans;
}