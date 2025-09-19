#include <iostream>
#include <string>

int times(char c) {
    switch (c) {
        case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': case ' ':
        return 1;
        case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x':
        return 2;
        case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y':
        return 3;
        case 's': case 'z':
        return 4;
        default:
        return 0;
    }
}

int main() {
    std::string line;
    std::getline(std::cin, line);
    int count = 0;
    for (char c : line) {
        count += times(c);
    }
    std::cout << count << '\n';
}