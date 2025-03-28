#include <iostream>

using namespace std;

class A {
public:
    A(int ID) {
        objectID = ID;
        cout << "Obj " << objectID << " is constructed!" << endl;
    }
    A(const A &a) {
        objectID = a.objectID;
        cout << "Obj " << objectID << " is copy constructed" << endl;
    }
    ~A() {
        cout << "Obj " << objectID << " is destructed!" << endl;
    }
private:
    int objectID;
};

void create() {
    A third(3);
    static A fourth(4);
}
void fun1(A) {}

A first(1);

int main() {
    create();
    A *p = new A(2);
    create();
    fun1(A(5));
    delete p;
    return 0;
}