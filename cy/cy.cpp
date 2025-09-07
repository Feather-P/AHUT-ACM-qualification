#include <iostream>
int main() {
    int days;
    std::cin >> days;
    int ans = 1;
    for (int i = 1; i < days; ++i) {
        ans = (ans+1)*2;
    }
    std::cout << ans;
}