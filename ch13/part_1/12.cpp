#include <iostream>

using namespace std;

class Base {
public:
    virtual void f1() {
        cout << "f1 function of base" << endl;
    }

    virtual void f2() {
        cout << "f2 function of base" << endl;
    }

    virtual void f3() {
        cout << "f3 function of base" << endl;
    }

    void f4() {
        cout << "f4 function of base" << endl;
    }
};

class Derive : public Base {
    void f1() {
        cout << "f1 function of derive" << endl;
    }

    void f2(int x) {
        cout << "f2 function of derive" << endl;
    }

    void f4() {
        cout << "f3 function of derive" << endl;
    }
};

int main() {
    Base obj1, *p;
    Derive obj2;
    p = &obj1;
    p->f1();
    p->f2();
    p->f3();
    p = &obj2;
    p->f1();
    p->f2();
    p->f3();
    p->f4();

    return 0;
}
