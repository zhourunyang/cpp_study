#include <iostream>

using namespace std;

class Point {
public:
    Point(int x = 0, int y = 0):x(x), y(y) {
        count++;
    }

    Point(const Point &p):x(p.x), y(p.y) {
        count++;
    }
    ~Point() {
        count--;
    }
    int getX() { return x; }    
    int getY() { return y; }
    void showCount() {
        cout << " Object count=" << count << endl;
    }
private:
    int x, y;
    static int count;
    constexpr static int origin = 0;
};

int Point::count = 0;
constexpr int Point::origin;

int main() {
    Point a(4, 5);
    cout << "Point A: " << a.getX() << ", " << a.getY();
    a.showCount();

    Point b(a);
    cout << "Point B: " << b.getX() << ", " << b.getY();
    b.showCount();

    return 0;
}
