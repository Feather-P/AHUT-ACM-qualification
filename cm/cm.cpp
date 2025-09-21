#include <cmath>
#include <iostream>
#include <string>

bool is_prime(int num) {
  if (num == 1) {
    return false;
  }
  for (int i = 2; i <= std::sqrt(num); ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  std::ios::sync_with_stdio(false);
  int total;
  std::cin >> total;
  std::string input;
  for (int i = 0; i < total; ++i) {
    std::cin >> input;
    if (is_prime(std::stoi(input))) {
      std::cout << input << " ";
    }
  }
}