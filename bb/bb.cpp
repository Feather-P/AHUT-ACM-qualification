#include <iostream>
#include <vector>
#include <string>
int main() {
    std::vector<std::string> nums;
    std::string tmp;
    while (std::cin >> tmp && tmp != "0") {
        nums.push_back(tmp);
    }
    for (auto it = nums.rbegin(); it != nums.rend(); ++it) {
        std::cout << *it << " ";
    }
}