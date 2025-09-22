#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    int sqrt_num = sqrt(num);
    for (int i = 3; i <= sqrt_num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void find_goldbach(int even_num) {
    for (int i = 2; i <= even_num / 2; i++) {
        if (is_prime(i) && is_prime(even_num - i)) {
            printf("%d=%d+%d\n", even_num, i, even_num - i);
            return;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 2; i <= N / 2; i++) {
        int even_num = 2 * i;
        find_goldbach(even_num);
    }
    
    return 0;
}
