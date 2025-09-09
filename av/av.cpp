#include <iostream>
#include <vector>
int main() {
    int total;
    std::cin >> total;
    std::vector<int> num;
    for (int i = 0; i < total; ++i) {
        int tmp;
        std::cin >> tmp;
        num.push_back(tmp);
    }
    int term = 1;
    int max = 0;
    for (int i = 0; i < total - 1; ++i) {
        if (num.at(i) + 1 == num.at(i + 1)) {
            ++term;
        } else {
            term = 1;
        }
        if (term > max) {
            max = term;
        }
    }
    std::cout << max;
}