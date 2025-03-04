#include <iostream>

using namespace std;

class Someclass {
    int One, Two;
public:
    Someclass(int a = 1, int b = 1) {
        One = a;
        Two = b;
        cout << "Structor" << endl;
    }
    
    Someclass(const Someclass &s) {
        One = s.One;
        Two = s.Two;
        cout << "Copy structor" << endl;

    }

    void show() {
        cout << "One = " << One << ";" << "Two = " << Two << endl;
    }

    Someclass operator ^(Someclass s) {
        Someclass temp(One - s.One, Two * s.Two);
        return temp;
    }

    ~Someclass() {
        cout << "Destructor:" << One << " " << Two << endl;
    }
};

int main() {
    Someclass obj1, obj2(9, 4);
    obj2 = obj2 ^ obj1;
    obj2.show();

    return 0;
}