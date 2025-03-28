#include <iostream>

using namespace std;

int main() {
    char c[] = "You Are Students.";
    char *p = c;
    while(*p) {
        if(*p == ' ') {
            *p = *(p - 1) - 'a' + 'A';
            cout << p << endl;
        }
        p++;
    }
    return 0;
}
/*
UAre Students.
EStudents.
*/