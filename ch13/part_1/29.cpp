#include <iostream>

using namespace std;

void exchange(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int data[8] = {15, 12, 20, 0, 8, -5, 17, 1};
    for(int i = 0; i < 8; i++) {
        for(int j = 1; j < 8; j++) {
            if(data[i] > data[j])
                exchange(&data[i], &data[j]);
        }
        cout << data[i] << " ";
    }
}