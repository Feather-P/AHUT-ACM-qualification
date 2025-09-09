#include <iostream>
int reverse(int num) {
  int original = num;
  int reversed = 0;
  if (num > 0) {
    while (num > 0) {
      reversed *= 10;
      reversed += num % 10;
      num /= 10;
    }
    return reversed;
  } else {
    if (num < 0) {
      while (num < 0) {
        reversed *= 10;
        reversed += num % 10;
        num /= 10;
      }
      return reversed;
    }
  }
  return 0;
}

  int main() {
    int input;
    std::cin >> input;
    std::cout << reverse(input);
  }