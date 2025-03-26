#include <iostream>

using namespace std;

class A {
public:
    A() { cout << "A"; }
};

class B {
public:
    B() { cout << "B"; }
    A a;
};

class C : public A {
public:
    C() { cout << "C"; }
private:
    B b;
};

int main() {
    B bobj;
    cout << endl;
    C cobj;
    cout << endl;
    return 0;
}