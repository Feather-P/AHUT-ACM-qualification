#include <iostream>
int main() {
    int input;
    std::cin >> input;
    std::cout << "Today, I ate " << input << " ";
    if (input > 1) {
        std::cout << "apples.";
    } else {
        std::cout << "apple.";
    }
}