#include <iostream>

using namespace std;



int main() {
    int a[3][3] = {0},i , j, f = 2, x = 60;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            while(x % f != 0)
                f++;
            a[i][j] = f;
            x = x / f;
            if(x == 1)
                f = 1;
        }
    }

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
    return 0;
}