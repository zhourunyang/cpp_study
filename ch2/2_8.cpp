#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Number " << n << " Factors ";
    for (int k = 1; k * k <= n; k++) {
        if (n % k == 0) {
            cout << k << " ";
            // 避免重复输出平方根对应的因数
            if (k != n / k) 
                cout << n / k << " ";
        }   
    }
    cout << endl;
    return 0; 
}