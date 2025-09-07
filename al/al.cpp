#include <iostream>

int count_number(int num, int target) {
    int sum = 0;
    int digit = 1;
    
    // 逐位检查数字
    while (digit <= num) {
        int current_digit = (num / digit) % 10;
        if (current_digit == target) {
            sum += 1;
        }
        digit *= 10;
    }
    
    return sum;
}

int main() {
    int n, x;
    std::cin >> n >> x;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += count_number(i, x);
    }
    std::cout << sum;
    
    return 0;
}