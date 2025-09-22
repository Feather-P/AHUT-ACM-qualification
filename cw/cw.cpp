#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

pair<int, int> countAB(int n) {
    int a_count = 0, b_count = 0;
    
    for (int i = 1; i <= n; i++) {
        string binary;
        int num = i;
        
        while (num > 0) {
            binary += to_string(num % 2);
            num /= 2;
        }
        reverse(binary.begin(), binary.end());
        
        int zeros = count(binary.begin(), binary.end(), '0');
        int ones = count(binary.begin(), binary.end(), '1');
        
        if (ones > zeros) {
            a_count++;
        } else {
            b_count++;
        }
    }
    
    return make_pair(a_count, b_count);
}

int main() {
    int n;
    cin >> n;
    
    pair<int, int> result = countAB(n);
    cout << result.first << " " << result.second << endl;
    
    return 0;
}
