#include <stdio.h>
int values[107];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &values[i]);
    } // 读入数据
    
    int count = 0;
    for (int t = 1; t <= n; ++t) {
        int found = 0; // 标记是否找到满足条件的数对
        for (int i = 1; i <= n && !found; ++i) {
            for (int j = i + 1; j <= n && !found; ++j) {
                // 确保i、j、t是不同的索引
                if (i != t && j != t && values[i] + values[j] == values[t]) {
                    count++;
                    found = 1; // 找到后就不再检查其他数对
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}