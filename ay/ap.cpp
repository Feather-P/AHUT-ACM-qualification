#include <iostream>

int cal(int x, int k) { return 52 * 7 * x + 52 * ((1 + 6) * 6 / 2 * k); }

int main() {
  int sum;
  std::cin >> sum;
  int x = 100;
  int k = 1;
  for (; x > 0; --x) {
    k = 1;
    for (; k < sum; k++) {
      if (cal(x, k) == sum) {
        goto end;
      }
    }
  }
  end:
  std::cout << x << "\n" << k;
}