#include <iostream>

using namespace std;

class A {
public:
    virtual void fun1() {
        cout << "A fun1" << endl;
    }

    virtual void fun2() {
        cout << "A fun2" << endl;
    }

    /*
    void fun3() {
        cout << "A fun3" << endl;
    }
    */
   virtual void fun3() {
        cout << "A fun3" << endl;
    }
};

class B : public A {
public:
    void fun1() {
        cout << "B fun1" << endl;
    }

    /*
    void fun2(int x) {
        cout << "B fun2" << endl;
    }
    */
   void fun2() {
        cout << "B fun2" << endl;
    }

    void fun3() {
        cout << "B fun3" << endl;
    }
};

int main() {
    A *p;
    B b;
    p = &b;
    p->fun1();
    p->fun2();
    p->fun3();

    return 0;
}
/*
B fun1
B fun2
B fun3
*/