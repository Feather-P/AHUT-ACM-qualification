#include <iostream>
int main() {
    double weight, height, bmi;
    std::cin >> weight >> height;
    bmi = weight / (height * height);
    if (bmi < 18.5) {
        std::cout << "Underweight";
    } else if (bmi >= 18.5 && bmi < 24){
        std::cout << "Normal";
    } else {
        std::cout << bmi << "\n";
        std::cout << "Overweight";
    }
}