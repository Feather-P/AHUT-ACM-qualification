#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i <= std::sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int L;
    std::cin >> L;
    
    std::vector<int> primes;
    int sum = 0;
    
    if (2 <= L) {
        primes.push_back(2);
        sum += 2;
    }
    // 从3开始检查每个数是否为质数
    for (int num = 3; num <= L; num+=2) {
        if (isPrime(num)) {
            // 如果加上这个质数不超过L，则加入口袋
            if (sum + num <= L) {
                primes.push_back(num);
                sum += num;
            } else {
                break;  // 超过容量，停止添加
            }
        }
    }
    
    // 输出所有质数
    for (int prime : primes) {
        std::cout << prime << std::endl;
    }
    
    // 输出质数个数
    std::cout << primes.size() << std::endl;
    
    return 0;
}