#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> grid;
    int n, m;
    std::cin >> n >> m;
    m--;
    
    grid.resize(n, std::vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> grid[i][j];
        }
    }
    
    std::vector<int> colMax(m, INT_MIN);
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (colMax[j] < grid[i][j]) {
                colMax[j] = grid[i][j];
            }
        }
    }
    
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int j = 0; j < m; j++) {
        currentSum = std::max(colMax[j], currentSum + colMax[j]);
        maxSum = std::max(maxSum, currentSum);
    }
    
    std::cout << maxSum << '\n';
    return 0;
}
