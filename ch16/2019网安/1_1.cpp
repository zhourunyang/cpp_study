#include <iostream>

using namespace std;

void fun(int a[]) {
    a[0] = a[-1] + a[1];
}
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 1; i < 9; i++) {
        fun(&a[i]);
    }
    for(int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
//1 4 8 13 19 26 34 43 53 10 