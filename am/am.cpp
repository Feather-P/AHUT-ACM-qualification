#include <iostream>
int main() {
    int k = 0;
    std::cin >> k;
    int ans = 0;
    double sum = 0;
    for (int n = 1; ; ++n) {
        sum += 1.0/n;
        if (sum > k) {
            ans = n;
            break;
        }
    }
    std::cout << ans << std::endl;
}