#include <iostream>
#include <string>
int main() {
    std::string line;
    std::getline(std::cin, line);
    int count = 0;
    for (char c : line) {
        if (c != ' ' && c != '\n') {
            count++;
        }
    }
    std::cout << count << "\n";
}