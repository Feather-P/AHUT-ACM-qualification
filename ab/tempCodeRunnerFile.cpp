#include <iostream>

int main() {
    int x,n;
    std::cin >> x >> n;
    int total = 0;
    for (; x < n + x; ++x) {
        if (n % x == 6 || n % x == 7) {
        } else {
            total += 250;
        }
    }
    std::cout << total;
}