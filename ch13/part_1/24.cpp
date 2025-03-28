#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[] = "abcdefgh", *p = s;
    p += 3;
    cout << strlen(strcpy(p, "ABCD")) << endl;
    cout << s << endl;
    return 0;
}
/*
4
abcABCD 
*/