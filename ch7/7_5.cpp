#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



char gid = 'A';

class Number {
    int i;
    char id;
public:

    Number(int x = 0) {
        i = x;
        id = gid++;
        cout << "Constructor: " << id << i << endl;
    }

    Number(const Number &x) {
        i = x.i;
        id = gid++;
        cout << "Copy Constructor: " << id << i << endl;

    }

    ~Number() {
        cout << "Destructor: " << id << i << endl;
    }

    Number operator + (const Number &x) {
        Number result(i + x.i);
        return result;
    }
};
int main() {



    Number x(1), y;
    y = x + 2;
    return 0;
}