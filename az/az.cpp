#include <iostream>
#include <vector>
int main() {
  std::vector<int> costs;
  for (int i = 0; i < 12; ++i) {
    int tmp;
    std::cin >> tmp;
    costs.push_back(tmp);
  }
  int remain = 0;  
  int savings = 0; 
  
  for (int i = 0; i < 12; ++i) {
    remain += 300; 
    if (remain < costs.at(i)) {
      std::cout << "-" << i + 1;  
      return 0;
    }
    
    remain -= costs.at(i);
    
    if (remain >= 100) {
      int deposit = (remain / 100) * 100;
      savings += deposit;           
      remain -= deposit;                
    }
  }
  
  remain += savings * 1.2;
  std::cout << remain;
}