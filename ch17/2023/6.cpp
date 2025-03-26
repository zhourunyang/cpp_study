#include <iostream>

using namespace std;

int fun2(int n) { 
    return ++n; 
}

int fun1(int (*fun)(int), int y) {
    int sum = 0, count = 0;
    for (int i = 1; i < y; i++) {
        sum += fun(i) + fun(i);
        count++;
        cout << sum << '\t';
    }
    return count;
}

int main() {
    int count = fun1(fun2, 3);
    cout << count << endl;
    return 0;
}