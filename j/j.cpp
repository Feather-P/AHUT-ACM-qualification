#include <cmath>
#include <iomanip>
#include <iostream>
int main() {
    double a,b,c;
    std::cin >>a>>b>>c;
    double p, square;
    p = a+b+c / 2;
    square = std::sqrt(p*(p-a)*(p-b)*(p-c));
    std::cout << std::fixed << std::setprecision(1) << square;
}