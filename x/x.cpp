#include <iostream>
#include <vector>
int main() {
    std::vector<int> schedule(7);
    for (int i = 0; i < 7; ++i) {
        int a, b;
        std::cin >> a >> b;
        schedule.at(i) = a+b;
    }
    int bad = 0;
    int worst = 0;
    for (int i = 0; i < 7; ++i) {
        int hours = schedule.at(i);
        if (hours > 8) {
            if (hours - 8 > worst) {
                worst = hours - 8;
                bad = i + 1;
            }
        }
    }
    std::cout << bad;
}