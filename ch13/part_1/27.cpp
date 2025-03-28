#include <iostream>

using namespace std;

void ss(char *s, char t) {
    while(*s) {
        if(*s == t)
            *s = t - 'a' + 'A';
        s++;
    }
}

int main() {
    char str1[100] = "abcddfefdbd", c = 'd';
    ss(str1, c);
    cout << str1 << endl;
    return 0;
}
//abcDDfefDbD