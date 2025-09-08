#include <iostream>
#include <vector>
int main() {
    int count = 0;
    std::vector<int> apples;
    int height;
    for (int i = 0; i < 10; i++) {
        int tmp;
        std::cin >> tmp;
        apples.push_back(tmp);
    }
    std::cin >> height;
    for (int i = 0; i < 10; i++) {
        if (height + 30 >= apples.at(i)) {
            count++;
        }
    }
    std::cout << count;
}