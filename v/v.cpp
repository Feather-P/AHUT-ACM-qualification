#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    std::vector<int> nums(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> nums.at(i);
    }

    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < 3; i++) {
        std::cout << nums.at(i) << " ";
    }
    std::cout << std::endl;
}