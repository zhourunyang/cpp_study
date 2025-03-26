#include <iostream>

using namespace std;

class Base {
public:
    Base() {
        cout << "B::start" << endl;
    }
    virtual void print() const {
        cout << "this is a B class" << endl;
    }
    ~Base() {
        cout << "B::end" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "D::start" << endl;
    }
    void print() {
        cout << "this is a Derived class" << endl;
    }
    ~Derived() {
        cout << "D::end" << endl;
    }
};

int main() {
    Base *p = new Derived;
    p->print();
    delete p;
    return 0;
}