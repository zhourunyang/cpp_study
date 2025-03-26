#include <iostream>

using namespace std;

class Base {
public:
    Base(int n, int m = 7) : x(n), y(n + m) { cout << x << "\t"; }
    void fun() { cout << y << "\t"; }

private:
    int x, y;
};

class A {
public:
    A(int n = 3) : k(n) { cout << k << "\t"; }

private:
    int k;
};

class Derived : public Base {
public:
    Derived(int n = 1, int m = 2) : a2(m), Base(n + m), z(n) {}
    void fun() { cout << z << "\t"; }

private:
    int z;
    A a1, a2;
};

void fun(Base &b) { 
    b.fun(); 
}
int main() {
    Derived d(5);
    fun(d);
    return 0;
}