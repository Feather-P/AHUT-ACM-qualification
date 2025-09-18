#include <iostream>
#include <vector>
#include <string>
int main() {
    std::vector<char> data;
    std::string line;
    int N = 0;
    
    while (std::getline(std::cin, line)) {
        if (line.empty()) continue;
        if (N == 0) {
            N = line.length();
        }
        for (char c : line) {
            data.push_back(c);
        }
    }
    
    std::cout << N;
    
    int i = 0;
    while (i < data.size()) {
        int count0 = 0;
        while (i < data.size() && data[i] == '0') {
            count0++;
            i++;
        }
        std::cout << " " << count0;
        
        int count1 = 0;
        while (i < data.size() && data[i] == '1') {
            count1++;
            i++;
        }
        if (count1 > 0) {
            std::cout << " " << count1;
        }
    }
    
    std::cout << std::endl;
    
    return 0;
}
