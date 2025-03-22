#include <iostream>

using namespace std;    

class Base {
public:
    virtual ~Base() {
        cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived(){
        p = new int(0);
    }
    ~Derived() {
        cout << "Derived destructor" << endl;
        delete p;
    }
private:
    int *p;
};

void fun(Base *ptr) {
    delete ptr;
}

int main() {
    Base *b = new Derived();
    fun(b);
    return 0;
}
