#include <iostream>

using namespace std;

double power(double x, int n);

int main() {
    int value = 0;
    cout << "Enter a 8 bit binary number: ";
    for(int i = 7; i >= 0; i --) {
        char ch;
        cin >> ch;
        if(ch =='1')
            value += static_cast<int> (power(2,i));
    }
    cout << "Decimal value is " << value << endl;
    return 0;
}

double power(double x, int n) {
    double res = 1.0;
    while(n --)
        res *= x;
    return res;
}