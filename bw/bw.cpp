#include <cctype>
#include <iostream>
#include <string>
#include <vector>
int main() {
    std::string line;
    std::vector<char> data;
    while (std::getline(std::cin, line)) {
        for (char c : line) {
            data.push_back(c);
        }
    }
    for (char& c : data) {
        c = toupper(c);
    }
    for (char & c: data) {
        std::cout << c;
    }
}