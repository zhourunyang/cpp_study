#include <iostream>

using namespace std;

class Array {
    int *p, n;
public:
    Array(int *a, int m);
    void sort();
    void print(int m);
    ~Array();
};

Array::Array(int *a, int m) {
    n = m;
    int cnt = 0;
    p = new int[m];
    while(cnt < m) {
        p[cnt] = a[cnt];
        cnt++;
    }
}

void Array::sort() {
    for(int i = 0; i < n; i ++) {
        for(int j = i + 1; j < n; j++) {
            if(abs(p[i]) < abs(p[j])) {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void Array::print(int m) {
    for(int i = 0; i < m; i++) {
        cout << p[i] << " ";
    }
}

Array::~Array() {
    delete []p;
}

int main() {
    int a[] = {-4, -3, -2, 1, 2, 3};
    Array arr(a, 6);
    arr.sort();
    arr.print(4);
    return 0;
}