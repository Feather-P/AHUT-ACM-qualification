#include <cctype>
#include <iostream>
int main() {
    unsigned char ch;
    std::cin >> ch;
    char ans = std::toupper(ch);
    std::cout << ans;
}