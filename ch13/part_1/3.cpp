#include <iostream>

using namespace std;

class Test {
    static int x, y;
public:
    Test(int a = 2, int b = 4) {
        x += a;
        y += b;
    }

    void show() {
        cout << "x= " << x << ", y= " << y << endl;
    }
};

int Test::x = 5, Test::y = 10;

int main() {
    Test a1(100, 200), a2;
    a1.show();
    a2.show();
    Test a3, a4(300, 400);
    a3.show();
    a4.show();

    return 0;
}
/*
x= 107, y= 214
x= 107, y= 214
x= 409, y= 618
x= 409, y= 618
*/