#include <iostream>

using namespace std;

class B1 {
public:
    B1() {
        cout << "B1:Constructor" << endl;
    }

    ~B1() {
        cout << "B1:Destructor" << endl;
    }
};

class B2 {
public:
    B2() {
        cout << "B2:Constructor" << endl;
    }

    ~B2() {
        cout << "B2:Destructor" << endl;
    }
};

class B3 {
public:
    B3() {
        cout << "B3:Constructor" << endl;
    }

    ~B3() {
        cout << "B3:Destructor" << endl;
    }
};

class A : public B2, public B3 {
    B1 b1;
public:
    A() : B3(), B2(), b1() {
        cout << "A:Constructor" << endl;
    }

    ~A() {
        cout << "A:Destructor" << endl;
    }
};

int main() {
    A a;
    return 0;
}
/*
B2:Constructor
B3:Constructor
B1:Constructor
A:Constructor
A:Destructor
B1:Destructor
B3:Destructor
B2:Destructor
*/