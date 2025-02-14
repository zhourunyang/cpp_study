#include <iostream>

using namespace std;

int sumOfSquare(int a, int b) {
    return a * a + b * b;
}

double sumOfSquare(double a, double b) {
    return a * a + b * b;
}

int main() {
    int m, n;
    cout << "Enter two integers: ";
    cin >> m >> n;
    cout << "Their sum of squares: " << sumOfSquare(m, n) << endl;

    double x, y;
    cout << "Enter two real numbers: ";
    cin >> x >> y;
    cout << "Their sum of squares:" << sumOfSquare(x, y) << endl;

    return 0;
}