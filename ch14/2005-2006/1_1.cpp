#include <iostream>

using namespace std;

void find(char a[], int m) {
    char *p;
    int i = 0;
    p = a;
    while(i <= m && *p != '\0') {
        cout << *p;
        p++;
        i++;
    }
    cout << endl;
}

int main() {
    char s[] = "WINDOWS-SYSTEM";
    for(int i = 2; i < 5; i++)
        find(s + i, i);
    return 0;
}
/*
NDO
DOWS
OWS-S
*/