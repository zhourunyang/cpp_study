#include <iostream>

using namespace std;

double fl(double x) {
    return x + x;
}

double f2(double(*f)(double x), int a) {
    int x;
    double sum = 0;
    for(x = a; x <= a + 1; x++)
        sum += f(x) * f(x);
    return sum;
}

int main() {
    double sum;
    for(int i = 1; i < 5; i++) {
        sum = f2(fl, i);
        cout << sum << endl;
    }
    return 0;
}

