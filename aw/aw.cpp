#include <cmath>
#include <iostream>

int main() {
  int num;
  std::cin >> num;
  int i = 2;
  for (; i < num; ++i) {
    if (num % i == 0) {
      break;
    }
  }
  std::cout << num / i;
}