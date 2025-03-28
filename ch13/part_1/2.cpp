#include <iostream>

using namespace std;

class Coord {
private:
    int x, y;
public:
    Coord(int i = 0, int j = 0) {
        x = i;
        y = j;
    }

    void print() {
        cout << "x=" << x << " y=" << y << endl;
    }

    friend Coord operator ++ (Coord op);
};

Coord operator ++ (Coord op) {
    ++op.x;
    ++op.y;
    return op;
}

int main() {
    Coord obj1(1, 2), obj2;
    obj1.print();
    ++obj1;
    obj2 = ++obj1;
    obj1.print();
    obj2.print();

    return 0;
}
/*
x=1 y=2
x=1 y=2
x=2 y=3
*/