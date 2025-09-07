#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main() {
  std::vector<int> nums(3);
  std::string order;
  
  for (int i = 0; i < 3; i++) {
    std::cin >> nums[i];
  }
  
  std::cin >> order;
  
  std::sort(nums.begin(), nums.end());
  
  for (int i = 0; i < 3; i++) {
    if (i > 0) {
      std::cout << " ";
    }
    switch (order[i]) {
      case 'A':
        std::cout << nums[0];
        break;
      case 'B':
        std::cout << nums[1];
        break;
      case 'C':
        std::cout << nums[2];
        break;
    }
  }
  std::cout << std::endl;
  
  return 0;
}
