#include <iostream>

using namespace std;

/* class 类名称 
{
    public:
        公有成员(外部接口)
    private：
        私有成员
    protected：
        保护型成员
} */

class Clock {
public:
    void setTime(int newH = 0, int newM = 0, int newS = 0);
    void showTime();
private:
    int hour, minute, second;
};

//clock类成员函数的具体实现:
void Clock::setTime(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

inline void Clock::showTime() {
  cout << hour << ":" << minute << ":" << second << endl; 
}

//主函数
int main() {
    Clock myClock;
    cout << "First time set and output:" << endl;
    myClock.setTime();  //设置时间为默认值
    myClock.showTime();
    cout << "Second time set and output:" << endl;
    myClock.setTime(8,30,30);
    myClock.showTime();
    return 0;
}