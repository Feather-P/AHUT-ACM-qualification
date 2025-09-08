#include <iostream>
struct Time {
    int hour;
    int minute;
};

int convert_minute(int hour, int minute) {
    int ans;
    ans = hour * 60 + minute;
    return ans;
}

Time convert_hour(int minute) {
    Time time;
    time.hour = minute / 60;
    time.minute = minute % 60;
    return time;
}

int main() {
    int ah, am, bh, bm;
    std::cin >> ah >> am >> bh >> bm;
    int at = convert_minute(ah, am);
    int bt = convert_minute(bh, bm);
    int delta = bt - at;
    Time time = convert_hour(delta);
    std::cout << time.hour << " " << time.minute << "\n";
}