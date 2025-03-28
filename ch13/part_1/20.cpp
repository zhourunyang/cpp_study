#include <iostream>

using namespace std;

void fun() {
    static int a = 0;
    for(int i = 0; i <= a; i++) {
        cout << "*";
    }
    cout << a++ << endl;
}

int main() {
    for(int i = 0; i < 4; i++)
        fun();
    
    return 0;
}
/*
*0
**1
***2
****3
*/