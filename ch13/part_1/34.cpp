#include <iostream>

using namespace std;

int main() {
    char *s = "121";
    int k = 0, a = 0, b = 0;
    do{
        k++;
        if(k % 2 == 0) {
            a += s[k] - '0';
            continue;
        }
        if(s[k]) {
            b += s[k] - '0';
            a += s[k] - '0';
        }
    }while(s[k]);
    cout << k << " " << a << " " << b <<endl;
    return 0;
}