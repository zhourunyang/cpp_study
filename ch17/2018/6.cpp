#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char ch[] = "abc", x[3][4];
    int i;
    for (i = 0; i < 3; i++)
        strcpy(x[i], ch);
    for (i = 0; i < 3; i++)
        cout << (x[i] + i);
    return 0;
}