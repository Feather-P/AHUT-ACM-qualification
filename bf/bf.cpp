#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int N;
    std::cin >> N;
    
    // 处理临界情况：N=1 时没有质因子
    if (N == 1) {
        return 0;
    }
    
    std::vector<bool> is_prime(N+1, true);
    std::vector<int> primes;
    is_prime[0] = false;
    is_prime[1] = false;
    
    for (int i = 2; i * i <= N; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    for (int i = 2; i <= N; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    
    // N!中的指数
    for (int p : primes) {
        int count = 0;
        int power = p;
        while (power <= N) {
            count += N / power;
            power *= p;
        }
        std::cout << p << " " << count << std::endl;
    }
    
    return 0;
}