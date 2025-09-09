#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int length, num;
    std::cin >> length >> num;
    
    if (length <= 0) {
        std::cout << 0 << std::endl;
        return 0;
    }
    
    std::vector<bool> flags(length + 1, 0);
    
    for (int i = 0; i < num; ++i) {
        int a, b;
        std::cin >> a >> b;
        
        a = std::max(0, std::min(a, length));
        b = std::max(0, std::min(b, length));
        
        if (a > b) std::swap(a, b);
        
        for (; a <= b; ++a) {
            flags[a] = 1;
        }
    }
    
    int remaining = 0;
    for (int i = 0; i <= length; ++i) {
        if (flags[i] == 0) {
            remaining++;
        }
    }
    
    std::cout << remaining << std::endl;
}