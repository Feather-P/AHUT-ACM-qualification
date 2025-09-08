#include <iostream>
int main() {
    int h, r;
    double volume;
    int bucket;
    std::cin >> h >> r;
    volume =3.14 * r * r * h;
    bucket = 20000 / volume;
    if (bucket * volume != 20000.0) {
        bucket++;
    }else {
    }
    std::cout << bucket;
}