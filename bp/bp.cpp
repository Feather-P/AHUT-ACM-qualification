#include <cmath>
#include <ios>
#include <iostream>
#include <unordered_map>
int main() {
    std::ios::sync_with_stdio(false);

    std::unordered_map<long long int, bool> data;
    int steps = 0;
    std::cin >> steps;
    for (int i = 0; i < steps; ++i) {
        double value = 0;
        int n = 0;
        std::cin >> value >> n;
        double valuen = value;
        for (int j = 1; j <= n; ++j) {
            const int s = std::floor(value * j);
            auto it = data.find(s);
            if (it == data.end()) {
                data[s] = true;
            } else{
                data[s] = !data[s];
            }
        }
    }
    for (auto d : data) {
        if (d.second == true) {
            std::cout << d.first << "\n";
            break;
        }
    }
}