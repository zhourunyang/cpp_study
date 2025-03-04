#include <iostream>

using namespace std;

class Point {
    int x, y;
public:
    Point(int xx = 0, int yy = 0) {
        x = xx;
        y = yy;
        cout << "cons\n";
    }

    Point(const Point& p) {
        x = p.x;
        y = p.y;
        cout << "copy cons\n";
    }

    ~Point() {
        cout << "des " << x << " " << y << endl;
    }

    int xCoord() {return x;}
    int yCoord() {return y;}
};

Point f(Point &p) {
    Point t(p.xCoord() + 5, p.yCoord() + 10);
    return t;
}
int main() {
    Point p1, p2(45, 65), *pp = &p1;
    Point p3 = p2;
    p1 = f(p3);
    cout << "x=" << pp ->xCoord() << ",y=" << pp ->yCoord() << endl;

    return 0;
}
