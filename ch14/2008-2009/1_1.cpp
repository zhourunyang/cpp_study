#include <iostream>

using namespace std;

int main() {
    int a, b, k = 4, m = 6, *p1 = &k, *p2 = &m;
    int arr[] = {30, 25, 20, 15, 10, 5}, *p = arr;
    p++;
    cout << *(p + 3) << endl;
    a = (p1 == &m);
    b = (*p1) / (*p2) + 7;
    cout << a << endl << b << endl;
    return 0;
}