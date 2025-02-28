#include <iostream>

using namespace std;

class Point {
public:
    Point(int xx = 0, int yy = 0) {
        x = xx;
        y = yy;
    }
    Point(const Point &p);
    int getX() { return x; }
    int getY() { return y; }
private:
    int x, y;
};

Point::Point(const Point &p) {
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor" << endl;
}

//形参为Point类对象的函数
void func1(Point p) {
    cout << p.getX() << endl;
}

//返回值为Point类对象的函数
Point func2() {
    Point a(1, 2);
    return a;
}
int main() {
    Point a(4, 5);
    Point b(a);
    //Point b = a;
    cout << b.getX() << endl;

    func1(a);

    b = func2();  //编译器返回值优化
    cout << b.getX() << endl;

    return 0;
}

