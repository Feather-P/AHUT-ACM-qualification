#include <cmath>
#include <iomanip>
#include <iostream>

double distance(double ax, double ay, double bx, double by){
    return std::sqrt(pow(ax - bx , 2)+ pow(ay - by, 2));
}

int main() {
    double apx,apy,bpx,bpy,cpx,cpy;
    std::cin >> apx >> apy >> bpx >> bpy >> cpx >> cpy;
    double sum = 0;
    sum += distance(apx, apy, bpx, bpy);
    sum += distance(apx, apy, cpx, cpy);
    sum += distance(bpx, bpy, cpx, cpy);

    std::cout << std::fixed << std::setprecision(2) << sum;
}