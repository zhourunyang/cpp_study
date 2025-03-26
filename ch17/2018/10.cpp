#include <iostream>

using namespace std;

class A {
    int x, y;
public:
    A(int a, int b) {
        x = a;
        y = b;
    }
    virtual void f1() { cout << "x+y=" << x + y << endl; }
};

class B : public A {
    int m, n;
public:
    B(int a, int b, int c, int d) : A(c, d) {
        m = a;
        n = b;
    }
    void f1() {
         cout << "m*n=" << m * n << endl;
    }
};

void print(A &ra) { ra.f1(); }

int main() {
    A a(10, 20), *pa;
    B *pb;
    pb = new B(2, 3, 4, 5);
    pb->f1();
    pa = &a;
    pa->f1();
    pa = pb;
    pa->f1();
    print(*pb);
    delete pb;
    return 0;
}