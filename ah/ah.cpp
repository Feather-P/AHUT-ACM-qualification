#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

double avg(std::vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    return static_cast<float>(sum)/vec.size();
}

std::string format(double fp) {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(1) << fp;
    return ss.str();
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> A;
    std::vector<int> B;
    A.clear();
    B.clear();
    for (int i = 1; i <= n; ++i) {
        if (i % k == 0) {
            A.push_back(i);
        } else {
            B.push_back(i);
        }
    }
    std::cout << format(avg(A)) << " " << format(avg(B));
}