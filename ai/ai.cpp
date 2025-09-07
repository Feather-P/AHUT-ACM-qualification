#include <cmath>
#include <iostream>
int main() {
    long int length;
    std::cin >> length;
    int count = 0;
    for (;length >= 1;) {
        length= std::floor(length/2);
        ++count;
    }
    std::cout << count; 
}