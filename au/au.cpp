#include <iostream>
#include <vector>
int main() {
    int total;
    std::cin >> total;
    std::vector<int> nums;
    for (int i = 0; i < total; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    int min = nums.at(0);
    int max = nums.at(0);
    for (int i = 0; i < total; ++i) {
        if (min > nums.at(i)) {
            min = nums.at(i);
        }
        if (max < nums.at(i)) {
            max = nums.at(i);
        }
    }
    std::cout << max - min;
}