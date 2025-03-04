#include <iostream>

using namespace std;

class Base {
public:
    virtual void f() {
        cout << "f0+";
    }

    void g() {
        cout << "g0+";
    }
};

class Derived : public Base {
public:
    void f() {
        cout << "f+";
    }

    void g() {
        cout << "g+";
    }
};

int main() {
    Base *p;
    Derived d;
    p = &d;
    p->f();
    p->g();

    return 0;
}