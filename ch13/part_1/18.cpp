#include <iostream>

using namespace std;

class GA {
public:
    virtual int f() {
        return 1;
    }
};

class GB : public GA {
public:
    virtual int f() {
        return 2;
    }
};

void show(GA g) {
    cout << g.f() << endl;
}

void display(GA &g) {
    cout << g.f() << endl;
}

int main() {
    GA a;
    show(a);
    display(a);

    GB b;
    show(b);
    display(b);

    return 0;
}
/*  
1
1
1
2
*/