#include <iostream>

using namespace std;

class Base {
public:
    Base(int n) : x(n) {}
    void f() { cout << x * x << "\t"; }
    virtual void g() { cout << x++ << "\t"; }

private:
    int x;
};

class Derived : public Base {
public:
    Derived(int n) : Base(n++), x(n) {}
    void f() { cout << x++ << "\t"; }
    void g() { cout << x * x << "\t"; }

private:
    int x;
};

int main() {
    Derived d(3);
    Base b = d, *bp = &d;
    b.g();
    bp->f();
    bp->g();
    return 0;
}