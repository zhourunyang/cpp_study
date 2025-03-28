#include <iostream>

using namespace std;

class Matrix {
    int k[3][3];
public:
    Matrix(int p[3][3]) {
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                k[i][j] = p[i][j];
    }
    void display() {
        cout << "The matrix is: " << endl;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++)
                cout << k[i][j] << " ";
            cout << endl;
        }
    }

    void k_mul(int *x, int *y);
};

void Matrix::k_mul(int *x, int *y) {
    for(int i = 0; i < 3; i++) {
        y[i] = 0;
        for(int j = 0; j < 3; j++)
            y[i] += k[i][j] * x[j];
    }
}

int main() {
    int key[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int x[] = {1, 2, 3};
    int y[3];

    Matrix m(key);
    m.display();

    m.k_mul(x, y);
    cout << "XX:" << endl;
    for(int i = 0; i < 3; i++)
        cout << x[i] << " ";
    cout << endl;
    cout << "YY:" << endl;   
    for(int i = 0; i < 3; i++)
        cout << y[i] << " ";
    cout << endl;

    return 0;
}
