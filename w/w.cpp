#include <iostream>
bool is_r(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        return true;
    }
    if (year % 100 == 0 && year % 400 == 0) {
        return true;
    }
    return false;
}

int get_days(int month, bool r){
    if (month == 2 && !r) {
        return 28;
    } else if (month == 2 && r) {
        return 29;
    }
    switch (month) {
        case 1: {return 31;}
        case 3: return 30;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return  31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
    }
    return 0;
}

int main() {
    int year, month;
    std::cin >> year >> month;
    std::cout <<  get_days(month, is_r(year));
    return 0;
}