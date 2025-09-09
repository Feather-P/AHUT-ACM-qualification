#include <iostream>
bool is_even(int num) {
  if (num % 2 == 0) {
    return true;
  } else {
    return false;
  }
}
bool is_range(int num) {
  if (num > 4 && num <= 12) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int num;
  std::cin >> num;
  if (is_even(num) && is_range(num)) {
    std::cout << 1;
  } else {
    std::cout << 0;
  }
  std::cout << " ";

  if (is_even(num) || is_range(num)) {
    std::cout << 1;
  } else {
    std::cout << 0;
  }
  std::cout << " ";

  if (is_even(num) && !is_range(num) || !is_even(num) && is_range(num)) {
    std::cout << 1;
  } else {
    std::cout << 0;
  }
  std::cout << " ";
  if (!is_even(num) && !is_range(num)) {
    std::cout << 1;
  } else {
    std::cout << 0;
  }
}