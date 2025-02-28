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
    Clock(int newH, int newM, int newS);  //构造函数
    Clock();  //默认构造函数
    void setTime(int newH = 0, int newM = 0, int newS = 0);
    void showTime();
private:
    int hour, minute, second;
};

//构造函数的实现:
//Clock::Clock(int newH, int newM, int newS):hour(newH), minute(newM), second(newS){}
Clock::Clock(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

//默认构造函数的实现：
Clock::Clock():hour(0), minute(0), second(0)
{}

//clock类成员函数的具体实现:
void Clock::setTime(int newH, int newM, int newS) {
    hour = newH; 
    minute = newM;
    second = newS;
}

void Clock::showTime() {
  cout << hour << ":" << minute << ":" << second << endl; 
}

//主函数
int main() {
    Clock c1(6,40,0);
    Clock c2;
    c1.showTime();
    c2.showTime();
    return 0;
}