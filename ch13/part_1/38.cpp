#include <iostream>

using namespace std;

int main() {
    int a, b;
    for(b = 1, a = 1; b <= 50; b++) {
        if(a >= 10)
            break;
        if(a % 2 == 1) {
            a += 5;
            continue;
        }
        a -= 3;
    }
    cout << a << " " << b << endl;
}
//10 6