#include <iostream>
int main() {
    int a, b, c;
    int sum = 0;
    std::cin >> a >> b >> c;
    for (int i = 0; i <= c; ++i) {
        for (int j = 0; j <= c; ++j) {
            if (a*i + b * j == c) {
                sum++;
            }
        }
    }
    std::cout << sum << '\n';
}