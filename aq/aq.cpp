#include <cmath>
#include <iostream>

bool is_prime(int num) {
  for (int i = 2; i <= std::sqrt(num); ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

bool is_palindrome(int num) {
  if (num < 0)
    return false;

  int original = num;
  long reversed = 0;

  while (num > 0) {
    reversed = reversed * 10 + num % 10;
    num /= 10;
  }

  return original == reversed;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  for (int i = a; i <= b; ++i) {
    if (is_palindrome(i) && is_prime(i)) {
        std::cout << i << "\n";
    }
  }
}