#include <iostream>

using namespace std;

int main() {
    int a[3][3] = {1, 0, 2, 2, 2, 0, 0, 1, 0};
    int i, j;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) {
            a[i][j] = a[a[i][j]][a[j][i]];
            cout << a[i][j] << "\t";
        }
    
    return 0;
}