#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string original;
    cin >> n;
    cin >> original;
    
    for (char &c : original) {
        c = 'a' + (c - 'a' + n) % 26;
    }
    
    cout << original << endl;
    
    return 0;
}
