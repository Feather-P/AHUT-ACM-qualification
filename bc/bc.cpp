#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> sequence;
    sequence.push_back(n);
    
    while (n != 1) {
        if (n % 2 == 1) {
            n = n * 3 + 1;
        } else {
            n = n / 2;
        }
        sequence.push_back(n);
    }
    
    for (int i = sequence.size() - 1; i >= 0; i--) {
        cout << sequence[i];
        if (i > 0) {
            cout << " ";
        }
    }
    
    return 0;
}