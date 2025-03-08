#include <iostream>

using namespace std;

class SPrime {
    int a[100];
    int n;
public:
    SPrime() : n(0) {}
    int Prime(int x);
    void IsSPrime();
    void Show();
};

int SPrime::Prime(int x) {
    if(x == 1)
        return 0;
    for(int i =2 ; i * i <= x ; i++)
        if(x % i == 0)
            return 0;
    return 1;
}

void SPrime::IsSPrime() {
    for(int i = 1000; i <= 9999; i++) {
        if(Prime(i) && Prime(i / 10) && Prime(i / 100) && Prime(i / 1000))
            a[n++] = i;
    }
}

void SPrime::Show() {
    for(int i = 0; i < n; i++) {
        cout << a[i] << "  ";
        if((i + 1) % 6 == 0)
            cout << endl;
    }
    cout << endl;
    cout << "n=" << n << endl;
}

int main() {
    SPrime s;
    s.IsSPrime();
    s.Show();
    return 0;
}

