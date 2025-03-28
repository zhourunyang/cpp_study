#include <iostream>

using namespace std;    

class Sample {
    int x, y;
public:
    Sample(int a = 1, int b = 1) {
        x = a;
        y = b;
        disp();
    }

    Sample(const Sample &s) {
        x = s.x;
        y = s.y;
        cout << "in copy constructor" << endl;
    }

    Sample &operator = (Sample &s) {
        x = s.x;
        y = s.y;
        cout << "in operator=" << endl;
        return *this;
    }
    ~Sample() {
        if(x == y)
            cout << "x == y" << endl;
        else
            cout << "x != y" << endl;
    }
    void disp() {
        cout << "x=" << x << ",y=" << y << endl;
    }
    friend void ms(Sample s);
};

void ms(Sample s) {
    s.x = s.y;
}

int main() {
    Sample s1(2, 3);
    Sample s2 = s1;
    ms(s2);
    return 0;
}
/*
x=2,y=3
in copy constructor
in copy constructor
x == y
x != y
x != y
*/