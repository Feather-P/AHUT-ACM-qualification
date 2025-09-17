#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;
    
    int matrix[10][10] = {0};
    
    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    int num = 1;
    
    while (num <= n * n) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;
        
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;
        
        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = num++;
        }
        bottom--;
        
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << std::setw(3) << matrix[i][j];
        }
        std::cout << std::endl;
    }
    
    return 0;
}