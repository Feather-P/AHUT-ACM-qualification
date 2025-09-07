#include <iostream>
int main() {
  int input;
  std::cin >> input;
  int sum = 0;
  int day = 0;
  for (int i = 1;; ++i) {
    for (int j = 1; j <= i; ++j) {
      sum += i;
      ++day;
      if (day >= input) {
        break;
      }
    }
    if (day >= input) {
      break;
    }
  }
  std::cout << sum;
}