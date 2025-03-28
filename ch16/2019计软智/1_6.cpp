#include <iostream>

using namespace std;    

class M {
    int x, y;
public:
    M(int xx = 0, int yy = 0) : x(xx), y(yy) {}
    void print() {
        cout << x << " " << y << endl;
    }
    friend M operator ++(M &m);
};

M operator ++(M &m) {
    m.x++;
    m.y++;
    return m;
}

int main() {
    M a(1, 2);
    a.print();
    for(int i = 0; i < 4; i++)
        ++a;
    a.print();
    return 0;
}
/*
1 2
5 6
*/