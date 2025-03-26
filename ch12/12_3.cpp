#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

double area(double a, double b, double c) {
    if(a <= 0 || b <= 0 || c <= 0)
        throw invalid_argument("the side length should be positive");
    if(a + b <= c || a + c <= b || b + c <= a)
        throw invalid_argument("the side length should fit the triangle inequality");
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    cout << "Please input the side lengths of a triangle: ";
    cin >> a >> b >> c;
    try {
        double s = area(a, b, c);
        cout << "Area: " << s << endl;
    } catch (const exception &e) {
        cout << "Error: " <<e.what() << endl;
    }
    return 0;
}