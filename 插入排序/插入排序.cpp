#include <iostream>
#include <vector>

int main() {
  int num;
  std::pmr::vector<int> nums;
  while (std::cin >> num) {
    nums.push_back(num);
  } // 读入部分

  for (int i = 1; i < nums.size(); i++) {
    int key = nums.at(i);
    int j = i;
    while (j > 0 && nums.at(j-1) > key) {
      nums.at(j) = nums.at(j-1);
      --j;
    }
    nums.at(j) = key;
  }

  for (int num : nums) {
    std::cout << num << " ";
  }
}