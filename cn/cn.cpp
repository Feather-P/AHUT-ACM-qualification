#include <iostream>
#include <vector>
bool is_r(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        return true;
    }
    if (year % 100 == 0 && year % 400 == 0) {
        return true;
    }
    return false;
}

int main() {
    int yeara, yearb;
    std::cin >> yeara >> yearb;
    int count = 0;
    std::vector<int> list;
    for (int i = yeara; i <= yearb; ++i) {
        if (is_r(i)) {
            count++;
            list.push_back(i);
        }
    }
    std::cout << count << "\n";
    for (int r : list) {
        std::cout << r << " ";
    }
    std::cout << "\n";
}