#include <iostream>

using namespace std;

class B1 {
public:
    B1 () {
        cout << "B1 constructor" << endl;
    }
    ~B1 () {
        cout << "B1 destructor" << endl;
    }   
};

class B2 {
public:
    B2 () {
        cout << "B2 constructor" << endl;
    }
    ~B2 () {
        cout << "B2 destructor" << endl;
    }
};

class B3 {
public:
    B3 () {
        cout << "B3 constructor" << endl;
    }
    ~B3 () {
        cout << "B3 destructor" << endl;
    }
};

class A :public B2, public B3 {
    B1 b1;
public:
    A() {
        cout << "A constructor" << endl;
    }
    ~A() {
        cout << "A destructor" << endl;
    }
};

int main() {
    A a;
    return 0;
}