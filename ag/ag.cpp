#include <iostream>
#include <vector>
int main() {
    int total;
    std::cin >> total;
    std::pmr::vector<int> nums;
    for (int i = 1; i<=total; ++i) {
        int tmp;
        std::cin >> tmp;
        nums.push_back(tmp);
    } // 读入部分
    int min = nums.at(0);
    for (int num : nums) {
        if (num < min) {
            min = num;
        }
    }
    std::cout << min <<std::endl;
}