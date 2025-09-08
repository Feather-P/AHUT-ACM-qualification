#include <iostream>
int main() {
  int target;
  int na, pa, nb, pb, nc, pc;
  std::cin >> target >> na >> pa >> nb >> pb >> nc >> pc;
  int price = 0;
  int sum = 0;
  int ans = 0;
  while (sum < target) {
    price += pa;
    sum += na;
  }
  ans = price;

  price = 0;
  sum = 0;
  while (sum < target) {
    price += pb;
    sum += nb;
  }
  if (ans > price) {
    ans = price;
  }

  price = 0;
  sum = 0;
  while (sum < target) {
    price += pc;
    sum += nc;
  }
  if (ans > price) {
    ans = price;
  }
  std::cout << ans;
}