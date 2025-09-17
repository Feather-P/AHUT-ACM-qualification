#include <iostream>
#include <vector>
int main() {
  std::vector<int> freq(110, 0);
  int a, b, c;
  std::cin >> a >> b >> c;
  
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      for (int k = 1; k <= c; k++) {
        freq[i+j+k] += 1;
      }
    }
  }
  
  int output;
  int max = 0;
  for (int n = 3; n <= a+b+c; ++n) {
    if (max < freq.at(n)) {
        max = freq.at(n);
        output = n;
    }
    // 如果频率相同，选择较小的和
    else if (max == freq.at(n) && n < output) {
        output = n;
    }
  }
  
  std::cout << output;
  return 0;
}