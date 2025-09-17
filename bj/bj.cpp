#include <vector>
#include <iostream>
using namespace std;

class Block {
    vector<vector<int>> block;
    int n;
public:
    Block(int size) : n(size) {
        block.resize(n, vector<int>(n, 0));
    }
    
    auto is_num_in_line(int num, int line) -> bool {
        for (int i = 0; i < block.at(line).size(); i++) {
            if (block.at(line).at(i) == num) {
                return true;
            }
        }
        return false;
    }
    
    auto is_num_in_column(int num, int column) -> bool {
        for (int i = 0; i < block.size(); i++) {
            if (block.at(i).at(column) == num) {
                return true;
            }
        }
        return false;
    }
    
    bool is_filled(int row, int col) {
        return block[row][col] != 0;
    }
    
    void fill_magic_square() {
        int row = 0;
        int col = n / 2;
        block[row][col] = 1;
        
        for (int k = 2; k <= n * n; k++) {
            int prev_row = row;
            int prev_col = col;
            
            if (prev_row == 0 && prev_col != n - 1) {
                row = n - 1;
                col = prev_col + 1;
            }
            else if (prev_col == n - 1 && prev_row != 0) {
                row = prev_row - 1;
                col = 0;
            }
            else if (prev_row == 0 && prev_col == n - 1) {
                row = prev_row + 1;
                col = prev_col;
            }
            else {
                if (!is_filled(prev_row - 1, prev_col + 1)) {
                    row = prev_row - 1;
                    col = prev_col + 1;
                }
                else {
                    row = prev_row + 1;
                    col = prev_col;
                }
            }
            
            block[row][col] = k;
        }
    }
    
    void print() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << block[i][j];
                if (j < n - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    
    Block magic_square(n);
    magic_square.fill_magic_square();
    magic_square.print();
    
    return 0;
}