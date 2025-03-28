#include <iostream>

using namespace std;

class Base {
public:
    int *a;
    int b[5];
};

int main() {
    Base a;
    a.a = new int[5];
    Base b = a;
    a.a[2] = 3;
    b.a[2] = 4;
    cout << a.a[2] << endl;
    a.b[2] = 3;
    b.b[2] = 4;
    cout << a.b[2] << endl;
    return 0;
}
/*
4
3
 */