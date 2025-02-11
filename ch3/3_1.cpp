#include <iostream>

using namespace std;

//计算x的n次方
double power(double x, int n) {
    double res = 1.0;
    while(n --)
        res *= x;
    return res;
}

int main() {
    cout << "5 to the power of 2 is " << power(5,2) << endl;
    return 0;
}