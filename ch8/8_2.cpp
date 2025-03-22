#include <iostream>

using namespace std;

class Clock {
public:
    Clock(int hour = 0, int minute = 0, int second = 0);
    void showTime()  const;
    Clock& operator ++();
    Clock operator ++(int);
private:
    int hour, minute, second;
};

Clock::Clock(int hour, int minute, int second) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void Clock::showTime() const {
    cout << hour << ":" << minute << ":" << second << endl;
}

Clock& Clock::operator ++ () {
    second++;
    if (second >= 60) {
        second -=60;
        minute++;
        if(minute >= 60) {
            minute -= 60;
            hour = (hour + 1) % 24;
        }
    }
    return *this;
}

Clock Clock::operator ++ (int) {
    Clock temp = *this;
    ++ (*this);
    return temp;
}

int main() {
    Clock myClock(23, 59, 59);
    cout << "First time output: ";
    myClock.showTime();
    cout << "Show myClock++: ";
    myClock++.showTime();
    cout << "Show ++myClock: ";
    (++myClock).showTime();

    return 0;
}