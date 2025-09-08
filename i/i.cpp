#include <iostream>
class Time {
private:
  int mins;
  void check() {
    if (mins < 0) {
        mins += 24 * 60;
    }
    mins = mins % (24 * 60);
  }

public:
  Time(int hour, int min) {
    set(hour, min);
  }
  void set(int hour, int min) {
    mins = hour * 60 + min;
    check();
  }
  void add(int min) {
    mins += min;
    check();
  }
  void min(int min) {
    mins -= min;
    check();
  }
  void print() {
    int hour = mins / 60;
    int min = mins % 60;
    if (hour < 10) {
        std::cout << "0" << hour;
    }else {
        std::cout << hour;
    }
    std::cout << ":";
    if (min < 10) {
        std::cout << "0" << min;
    }else {
        std::cout << min;
    }
  }
};

int main() {
    int s, v, costs;
    std::cin >> s >> v;
    if (s % v == 0) {
        costs = s / v;
    } else {
        costs = (s / v) + 1;
    }
    Time time(8, 0);
    time.min(costs + 10);
    time.print();
}