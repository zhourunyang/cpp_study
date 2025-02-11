#include <iostream>

using namespace std;

unsigned fac(int n) {
    unsigned f;
    if(n == 0)
        f = 1;
    else
        f = n * fac(n - 1);
    return f;
}

int main() {
    unsigned n = 0, y = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    y = fac(n);
    cout << n << "! = " << y << endl;
    return 0;
}