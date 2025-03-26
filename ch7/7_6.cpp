#include <iostream>
using namespace std;
#include <cstring>

class money {
    int yuan, jiao, fen;
public:
    money (int y = 0, int j = 0, int f = 0) {
        yuan = y;
        jiao = j;
        fen = f;
    }

    money operator + (money c) {
        money t = c;
        yuan = yuan + c.yuan;
        jiao = jiao + c.jiao;
        fen = fen + c.fen;
        return t;
    }

    friend money operator + (money, int);
    void show() {
        cout << yuan << "yuan" << jiao << "jiao" << fen << "fen" << endl;
    }
};

money operator + (money c1, int s) {
    c1.yuan = c1.yuan;
    c1.jiao = c1.jiao;
    c1.fen = c1.fen + s;
    return c1;
}

int main(void) {
    money d1(25, 50, 70), d2(100, 200, 55), d3, d4;
    int s1 = 50;
    d3 = d1 + d2;
    d4 = d2 + s1;
    d1.show();
    d2.show();
    d3.show();
    d4.show(); 
}