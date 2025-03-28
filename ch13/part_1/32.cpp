#include <iostream>

using namespace std;

int sum(int p[], int *w, int n) {
    int i;
    int s = 0, m = 0;
    for(int i = 0; i < n; i++) {
        s += p[i];
        if(p[i] > m) {
            m = p[i];
            *w = i;
        }
    }
    return s;
}

int main() {
    int aa[3][3] = {2, 4, 8, 7, 5, 3, 2, 6, 9};
    int row[3], col[3] = {0, 0, 0};
    for(int i = 0; i < 3; i++) {
        row[i] = sum(aa[i], col + i, 3);
        cout << "row(" << i << ") = " << row[i] << endl;
    }
    for(int i = 0; i < 3; i++)
        cout << "第" << i <<"行位置：" << col[i] << endl;
    return 0;
}
/*
row(0) = 14
row(1) = 15
row(2) = 17
绗?
*/