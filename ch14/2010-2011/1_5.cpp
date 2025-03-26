#include <iostream>

using namespace std;

class A {
public:
    virtual void print() {
        cout << "A" << endl;
    }
};

class B : public A {
public:
    void print() {
        cout << "B" << endl;
    }
};

class C : public B {
public:
    void print() {
        cout << "C" << endl;
    }
};

void print(A a) {
    a.print();
}

int main() {
    A a, *pa;
    B b;
    C c;
    pa = &c;
    pa->print();
    pa = &b;
    pa->print();
    c.print();
    print(c);
    return 0;
}