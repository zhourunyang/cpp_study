#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class NUM {
    int n, m;
public:
    NUM(int x = 0);
    void fun();
    void print();
};

NUM::NUM(int x) {
    n = x;
    m = 0;
}

void NUM::fun() {
    vector<int> a;
    while(n) {
        a.push_back(n % 10);
        n /= 10;
    }
    sort(a.begin(), a.end(), greater<int>());
    for(int i = 0; i < a.size(); i++) {
        m = m * 10 + a[i];
    }
}

void NUM::print() {
    cout << m << endl;
}

int main() {
    int n;
    cin >> n;
    NUM a(n);
    a.fun();
    a.print();
    return 0;
}

