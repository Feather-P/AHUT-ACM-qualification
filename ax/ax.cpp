#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
int main() {
    int total;
    std::cin >> total;
    std::vector<int> nums;
    for (int i = 0; i < total; ++i) {
        int tmp;
        std::cin >> tmp;
        nums.push_back(tmp);
    }
    std::sort(nums.begin(), nums.end());

    nums.pop_back();
    nums.erase(nums.begin());
    float sum = 0;
    for (int num : nums) {
        sum += num;
    }
    float ans;
    ans = sum / (total - 2);
    std::cout << std::fixed << std::setprecision(2) << ans;
}