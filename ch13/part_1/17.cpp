#include <iostream>

using namespace std;

class B {
public:
    virtual void show() {
        cout << "B";
    }
};

class D : public B {
public:
    void show() {
        cout << "D";
    }
};

void fun1(B *p) {
    p->show();
}

void fun2(B &p) {
    p.show();
}

void fun3(B b) {
    b.show();
}

int main() {
    B *p = new D;          
    D d;
    B &b = d;
    fun1(p);
    fun2(b);
    fun3(d);
}
