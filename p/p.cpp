#include <iostream>
int main() {
    int m, t, s, ate;
    std::cin >> m >> t >> s;
    if (t == 0) {
        ate = m;
    } else if (s % t == 0) {
        ate = s / t;
    } else {
        ate = s / t + 1;
    }
    int ans = m - ate;
    if (ans < 0) {
        ans = 0;
    }
    std::cout << ans;
}