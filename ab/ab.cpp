#include <iostream>

int main() {
    int x,n;
    std::cin >> x >> n;
    int total = 0;
    const int stop = n+x;
    for (; x < stop; ++x) {
        if (x % 7 == 6 || x % 7 == 0) {
        } else {
            total += 250;
        }
    }
    std::cout << total;
}