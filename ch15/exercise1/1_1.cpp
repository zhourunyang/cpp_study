#include <iostream>

using namespace std;

class A {
    int n;
public:
    A(int a = 0) {
        n =a;
        cout << "A constructor " << n << endl;
    }
    A(const A &a) {
        n = a.n;
        cout << "A copy constructor " << n << endl;
    }
    ~A() {
        cout << "A destructor " << n << endl;
    }
};

void fun(A a) {
    static A b(a);
}

int main() {
    A a(10);
    A a1(a);
    A a2(5);
    fun(a2);
    fun(a2);
    return 0;
}
/*
A constructor 10
A copy constructor 10
A constructor 5
A copy constructor 5
A copy constructor 5
A destructor 5
A copy constructor 5
A destructor 5
A destructor 5
A destructor 10
A destructor 10
A destructor 5
*/