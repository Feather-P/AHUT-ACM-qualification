#include <stdio.h>

int count(int num, int target) {
  int count = 0;
  int digit = 0;
  while (1) {
    digit = num % 10;
    if (digit == target) {
      count++;
    }
    if (num / 10 == 0) {
      break;
    }
    num /= 10;
  }
  return count;
}

int main() {
  int a, b;
  scanf("%i %i", &a, &b);
  int n0 = 0;
  int n1 = 0;
  int n2 = 0;
  int n3 = 0;
  int n4 = 0;
  int n5 = 0;
  int n6 = 0;
  int n7 = 0;
  int n8 = 0;
  int n9 = 0;
  for (int i = a; i <= b; ++i) {
    n0 += count(i, 0);
    n1 += count(i, 1);
    n2 += count(i, 2);
    n3 += count(i, 3);
    n4 += count(i, 4);
    n5 += count(i, 5);
    n6 += count(i, 6);
    n7 += count(i, 7);
    n8 += count(i, 8);
    n9 += count(i, 9);
  }
  printf("%d %d %d %d %d %d %d %d %d %d",n0 ,n1, n2, n3, n4, n5, n6, n7, n8, n9);
}