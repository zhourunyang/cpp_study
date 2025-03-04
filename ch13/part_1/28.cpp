#include <iostream>

using namespace std;

void swap(int *p1, int *p2) {
    int *p;
    p = p1; 
    p1 = p2;
    p2 = p;
    cout << *p1 << " " << *p2 << endl;
}

int main() {
    int a = 5, b = 9;
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}