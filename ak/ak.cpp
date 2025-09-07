#include <iostream>
#include <vector>
#include <algorithm>

class BigInteger {
private:
    std::vector<int> digits;
    
public:
    BigInteger() {
        digits.push_back(0);
    }
    
    BigInteger(int num) {
        if (num == 0) {
            digits.push_back(0);
            return;
        }
        
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
    }
    
    BigInteger operator*(const BigInteger& other) const {
        BigInteger result;
        result.digits.clear();
        
        std::vector<int> temp(digits.size() + other.digits.size(), 0);
        
        for (size_t i = 0; i < digits.size(); ++i) {
            for (size_t j = 0; j < other.digits.size(); ++j) {
                temp[i + j] += digits[i] * other.digits[j];
            }
        }
        
        int carry = 0;
        for (size_t i = 0; i < temp.size(); ++i) {
            temp[i] += carry;
            carry = temp[i] / 10;
            temp[i] %= 10;
        }
        
        while (temp.size() > 1 && temp.back() == 0) {
            temp.pop_back();
        }
        
        result.digits = temp;
        return result;
    }
    
    BigInteger operator+(const BigInteger& other) const {
        BigInteger result;
        result.digits.clear();
        
        size_t max_len = std::max(digits.size(), other.digits.size());
        int carry = 0;
        
        for (size_t i = 0; i < max_len || carry > 0; ++i) {
            int digit1 = (i < digits.size()) ? digits[i] : 0;
            int digit2 = (i < other.digits.size()) ? other.digits[i] : 0;
            
            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            result.digits.push_back(sum % 10);
        }
        
        return result;
    }
    
    void print() const {
        for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
            std::cout << *it;
        }
    }
};

BigInteger factorial(int n) {
    BigInteger result(1);
    for (int i = 2; i <= n; ++i) {
        result = result * BigInteger(i);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    
    BigInteger sum(0);
    for (int i = 1; i <= n; ++i) {
        sum = sum + factorial(i);
    }
    
    sum.print();
    std::cout << std::endl;
    return 0;
}