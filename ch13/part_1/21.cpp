#include <iostream>

using namespace std;

void f(int *p, int *r,int size) {
    for(int i = 0; i < size; i++) {
        p[i] += *(r + i);
    }
}

int main() {
    const int column_size = 3, row_size = 3;
    int a[column_size][row_size] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int b[column_size] = {1, 2, 3};

    for(int i = 0; i < row_size; i++) {
        f(a[i], b, column_size);
        cout << b[i] << ',';
    }
    cout << endl;
    for(int i = 0; i < row_size; i++) {
        for(int j = 0; j < column_size; j++) {
            cout << a[i][j] << ',';
        }
        cout << endl;
    }
    return 0;
}