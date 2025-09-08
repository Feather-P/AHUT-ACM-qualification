#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    int money = a*10 + b;
    int ans;
    ans = money / 19;
    std::cout << ans;
}