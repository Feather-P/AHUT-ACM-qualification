#include <cstdio>
#include <iostream>

bool flag = false;
int progress = 0;
int digit = 0;
void print(int num) {
  for (int i = 0; i < num; ++i) {
    std::cout << (flag ? 1 : 0);
    progress++;
    if (progress == digit) {
      std::cout << "\n";
      progress = 0;
      continue;
    }
  }
  flag = !flag;
}

int main() {
  int n;
  std::cin >> n;
  digit = n;
  int sum = 0;
  int m = 0;
  while (sum <= n * n) {
    std::cin >> m;
    print(m);
    sum += m;
    if (sum == n * n) {
        break;
    }
  }
}