#include <iostream>

using namespace std;

int main() {
    unsigned i;
    int count = 1;
    i = ~0;
    while((i >>= 1) != 0) {
        count++;
    }
    cout << count << endl;
}