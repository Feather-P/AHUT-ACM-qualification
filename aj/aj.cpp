#include <iostream>
#include <ostream>
#include <string>

std::string format(int n) {
  if (n <= 9) {
    return "0" + std::to_string(n);
  } else {
    return std::to_string(n);
  }
}

int main() {
  short int input;
  std::cin >> input;
  int end = input;
  int interval = input;
  for (int i = 1; i <= (input + 1) * input / 2; i++) {
    std::cout << format(i);
    if (i == end) {
    std::cout << std::endl;
    interval--;
    end += interval;
    }
  }
}