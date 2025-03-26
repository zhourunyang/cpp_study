#include <iostream>

using namespace std;

int a = 0;
int add(int x, int y = 1) {
    return x + y + a++;
}

int fun(int (*p)(int, int), int m, int n) {
    int b = p(m, n) + add(a);
    cout << a << "\t";
    return b;
}

int main() {
    int n = fun(add, 3, 5);
    cout << n << endl;
    return 0;
}