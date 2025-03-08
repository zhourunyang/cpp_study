#include <iostream>
#include <cstring>
using namespace std;

class Str {
    char *p;  
public:
    Str(char *s);
    ~Str();
    void operate(char *s, int n);
    void show();
};

Str::Str(char *s) {
    p = new char[strlen(s) + 1];
    strcpy(p, s);
}

Str::~Str() {
    if(p != nullptr)
        delete[] p;
}

void Str::operate(char *s, int n) {
    int i, len = (int)strlen(s);
    char *s2 = new char[len + 1];
    char *p1 = s + len - 1;
    char *p2 = s2;
    for(int i = 0; i < len; i++)
        *p2++ = *p1--;
    char *s1 = new char[len + strlen(p) + 1];
    strcpy(s1, p);
    p1 = s1 + strlen(p);
    p2 = s2 + n -1;
    for(int i = n; i <len; i++) {
        char c = *p2++;
        if(c >= '0' && c <= '9')
            *p1++ = c;
    }
    *p1++ = '\0';
    delete []s2;
    delete []p;
    p = s1;
}

void Str::show() {
    cout << "新字符串为: " << p << endl;
}

int main() {
    char s1[] = "abcdef";
    char s2[] = "A2G1%34&2D#";
    int n = 5;
    cout << s1 << endl;
    cout << s2 << endl;

    Str str(s1);
    str.operate(s2, n);
    str.show();
    return 0;
}