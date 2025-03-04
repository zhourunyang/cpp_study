#include <iostream>

using namespace std;

int main() {
    int i, j;
    int a[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < i; j++)
            a[i] = a[i] + a[j];
    for(int i = 0; i < 10; i++)
        cout << a[i] << '\t';
    cout << '\n';

    return 0;
}