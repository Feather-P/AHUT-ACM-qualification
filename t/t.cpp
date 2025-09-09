int Local(int num) {
    return num * 5;
}

int Luogu(int num) {
    return  11 + num * 3;
}

#include <iostream>
int main() {
    int input;
    std::cin >> input;
    if (Local(input) > Luogu(input)) {
        std::cout << "Luogu";
    } else {
    std::cout << "Local";
    }
}