#include <iostream>

using namespace std;

class A {
public:
    A(int x) : n(x) { cout << n << "\t"; }
    void f() { cout << n * n << "\t"; }

private:
    int n;
};

class B : virtual public A {
public:
    B(int x) : A(x) { cout << x << "\t"; }
};

class C : virtual public A {
public:
    C(int x) : A(x) {}
};

class D : public B, public C {
public:
    D(int x) : A(x + 1), B(x), C(x) {}
};

int main() {
    D d(5);
    d.f();
    return 0;
}