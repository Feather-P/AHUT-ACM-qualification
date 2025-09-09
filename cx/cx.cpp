#include <vector>
#include <iostream>
using namespace std;

vector<int> readIntegersDirectly() {
    vector<int> result;
    int num;
    while (std::cin >> num) {
        result.push_back(num);
        
        char nextChar = cin.peek();
        if (nextChar == '\n' || nextChar == EOF) {
            break;
        }
    }
    
    return result;
}

int main() {
    vector<int> nums = readIntegersDirectly();
    long long int sum = 0;
    
    // 计算所有元素的和
    for (int num : nums) {
        sum += num;
    }
    
    // 计算总和：sum * 2^(n-1)
    int n = nums.size();
    long long int total = sum * (1LL << (n - 1));
    
    cout << total << endl;
    
    return 0;
}