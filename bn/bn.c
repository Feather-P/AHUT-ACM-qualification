#include <stdio.h>

int main() {
  int values[3007];
  int n = 0;
  int m = 0;
  scanf("%d %i", &n, &m);

  for (int i = 1; i <= n; ++i) {
    scanf("%d", &values[i]);
  }

  int sum = 0;
  for (int j = 1; j <= m; ++j) {
    sum += values[j];
  }
  int min = sum;
  // 读入第一个窗口

  for (int i = 1; i <= n - m; ++i) {
    sum = 0;
    for (int j = 0; j < m; ++j) {
      sum += values[i + j];
    }
    if (sum < min) {
      min = sum;
    }
  }
  printf("%d", min);
}