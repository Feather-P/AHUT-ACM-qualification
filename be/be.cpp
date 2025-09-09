#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    int total, target;
    std::cin >> total >>target;
    std::vector<int> nums;
    for (int i = 0; i < total; ++i) {
        int tmp;
        std::cin >> tmp;
        nums.push_back(tmp);
    }
    std::sort(nums.begin(), nums.end());
    int order = 1;
    for (int i = 0 ; i < total - 1; ++i) {
        if (nums.at(i + 1) > nums.at(i)) {
            order += 1;
        }
        if (order == target) {
            std::cout << nums.at(i + 1);
            return 0;
        }
    }
    std::cout << "NO RESULT";
}