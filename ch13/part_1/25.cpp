#include <iostream>

using namespace std;

int main() {
    char *p = "abcdefgh", *r;
    long *q = (long *)p;
    q++;
    r = (char *)q;
    cout << r << endl;
    return 0;
}