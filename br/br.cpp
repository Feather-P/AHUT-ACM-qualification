#include <iostream>
int main() {
    int triangle[23][23] = {0};
    
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        triangle[i][0] = 1;
        triangle[i][i] = 1;
        
        for (int j = 1; j < i; ++j) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << triangle[i][j];
            if (j < i) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    
    return 0;
}