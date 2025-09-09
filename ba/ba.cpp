#include <iostream>
#include <vector>
int count_not_kawaii(int order, const std::vector<int>& data) {
    int count = 0;
    for (int i = order - 1; i >= 0; --i) {
        if (data.at(i) < data.at(order)) {
            count++;
        }
    }
    return count;
}

int main() {
    int total;
    std::vector<int> kawaii_level;
    std::cin >> total;
    for (int i = 0; i < total; ++i) {
        int tmp;
        std::cin >> tmp;
        kawaii_level.push_back(tmp);
    }
    for (int i = 0; i < total; ++i) {
        std::cout <<count_not_kawaii(i, kawaii_level) << " ";
    }
}