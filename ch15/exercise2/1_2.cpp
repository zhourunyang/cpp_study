#include <iostream>

using namespace std;

template<class T>
class Point {
    T x, y;
public:
    Point(T a, T b) {
        x = a;
        y = b;
    }
    void move(T a, T b) {
        x += a;
        y += b;
    }
    void show() {
        cout << "Current Coordinate: "<< x << " " << y << endl;
    }
};

int main() {
    Point<int> m(3, 4);
    m.show();
    m.move(1.2, 2);
    m.show();
    Point<float> n(2, 3.4);
    n.show();
    n.move(1.3, 2.3);
    n.show();

    return 0;
}
/*
Current Coordinate: 3 4
Current Coordinate: 4 6
Current Coordinate: 2 3.4
Current Coordinate: 3.3 5.7
*/