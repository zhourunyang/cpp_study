#include <iostream>

using namespace std;

class CA {
public:
    virtual void f1() {
        cout << "CA::f1" << endl;
        f2();
    }
    void f2() {
        cout << "CA::f2" << endl;
    }
};

class CB : public CA {
public:
    void f1() {
        cout << "CB::f1" << endl;
        f2();
    }
    void f2() {
        cout << "CB::f2" << endl;
    }
};

class CC : public CB {
public:
    virtual void f2() {
        cout << "CC::f2" << endl;
    }
};

int main() {
    CC c;
    CA *p = &c;
    p->f1();
    p->f2();
    return 0;
}
/*
CB::f1
CB::f2
CA::f2
*/