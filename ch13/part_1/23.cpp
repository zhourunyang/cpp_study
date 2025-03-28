#include <iostream>

using namespace std;

void mys(const char *s, int &n) {
    if(*s == '\0')
        return;
    n++;
    mys(s + 1, n);
    cout << *s;
}

int main() {
    char s[] = "goodlevel";
    int t = 0;
    mys(s, t);
    cout << endl << t;
}
/*
leveldoog
9
*/