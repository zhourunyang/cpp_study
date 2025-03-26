#include <iostream>

using namespace std;

class Point {
public:
    Point(): x(0), y(0) {
        cout << "Default Constructor called." << endl;
    }
    Point(int x, int y): x(x), y(y) {
        cout << "Constructor called." << endl;
    }
    ~Point() {
        cout << "Destructor called." << endl;
    }
    int getX() { return x; }
    int getY() { return y; }
    void move(int newX, int newY) {
        x = newX;
        y = newY;
    }
private:
    int x, y;
};

int main() {
    cout << "Step one:" << endl;
    Point *ptr = new Point;
    delete ptr;

    cout << "Step two:" << endl;
    ptr = new Point(1, 2);
    delete ptr;
    
    return 0;
}