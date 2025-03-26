#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x, int y) : x(x), y(y) {
        cout << "Point constructor" << endl;
    }
    Point(const Point &p) : x(p.x), y(p.y) {
        cout << "Point copy constructor" << endl;
    }
    ~Point() {
        cout << "Point destructor" << endl;
    }
    int getX() const { return x; }
    int getY() const { return y; }
};

class Line {
public:
    Line(Point a, Point b) : a(a), b(b) {
        cout << "Line constructor" << endl;
    }
    double getLength() const;
    bool operator>(const Line &other);
    bool contains(Point p);
private:
    Point a, b;
};
double Line::getLength() const {
    double x = double(a.getX() - b.getX());
    double y = double(a.getY() - b.getY());
    return sqrt(x * x + y * y);
}
bool Line::operator>(const Line &other) {
    return this->getLength() > other.getLength();
}
bool Line::contains(Point p) {
    Line l1(a, p);
    Line l2(p, b);
    if ((l1.getLength() + l2.getLength() - getLength()) < 1e-3)
        return true;
    else
        return false;
}
int main() {
    Point a(1, 2);
    Point b(3, 4);
    Point c(5, 6);
    Line l1(a, b);
    Line l2(a, c);
    cout << "the length of l1 is:" << l1.getLength() << endl;
    cout << "the length of l2 is:" << l2.getLength() << endl;
    if (l2 > l1)
    {
        cout << "l2 is longer than l1" << endl;
    }
    if (l2.contains(a))
    {
        cout << "a is on the linesegment l2" << endl;
    }
    return 0;
}