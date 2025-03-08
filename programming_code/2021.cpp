#include <iostream>

using namespace std;

class FAC {
    int n;
public:
    FAC(int m) : n(m) {}
    double Fact(int m);
    double Sum();
};

double FAC::Fact(int m) {
    if(m == 0 || m == 1)
        return 1;
    return m * Fact(m - 1);
}

double FAC::Sum() {
    long long sum = 0;
    for(int i = 1; i <= n; i++)
        sum += Fact(i);
    return sum;
}

int main() {
    FAC f(6);
    cout << f.Sum() << endl;
    return 0;
}