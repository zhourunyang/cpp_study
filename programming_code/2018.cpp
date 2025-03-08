/*
已知求三角函数 sin(x)近似值的计算公式为： 泰勒级数
x 的单位为弧度。试定义一个类 SIN，根据输入的角度求出其正弦值。具体要求如下：
（1）私有成员：
double x,y：x 为弧度值，y 用于存放 sin(x)的值。
（2）公有成员：
SIN(double t)：构造函数，用参数 t 初始化成员 x 的值，y 的值置为 0。注意：参数 t 的值
为角度，初始化成员 x 时需要先将其转化为弧度（角度 t 转换为弧度的计算公式为
3.14159265*t/180）。
void fun()：根据题意计算 sin(x)的值，结果保存在数据成员 y 中。计算精度要求通项绝对
值不大于 10-6。
void print()： 输出数据成员 x 和 y。
（3）在主函数中用一个角度值对类进行测试。
输入输出示例（下划线部分为键盘输入）：
请输入一个角度： 45
弧度 x=0.785398 sin(x)=0.707107
*/
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265;

class SIN {
private:
    double x, y;
public:
    SIN(double t);
    void fun();
    void print();
};

SIN::SIN(double t) {
    x = t * PI / 180;
    y = 0;
}

void SIN::fun() {
    double t = x;
    int i = 1;
    while(fabs(t) > 1e-6) {
        y += t;
        t *= -x * x / (i + 1) / (i + 2);
        i += 2;
    }
}

void SIN::print() {
    cout << "弧度x=" << x << "    sin(x)=" << y << endl;
}
int main()
{
    double x;
    cout << "请输入一个角度: ";
    cin >> x;
    SIN s(x);
    s.fun();
    s.print();

    return 0;
}