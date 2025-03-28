#include <iostream>

using namespace std;

int main() {
    int y = 9;
    for( ; y > 0; y--) {
        if(y % 3 == 0)
            cout << --y << '\t';
    }

    return 0;
}
//8       5       2