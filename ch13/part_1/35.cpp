#include <iostream>

using namespace std;

int main() {
    int i, j;
    for(i = -3; i <= 1; i++) {
        j = i;
        while(j < 0) {
            if(j == -1)
                break;
            j++;
        }
    }
    cout << i << " " << j << endl;
    return 0;
}
//2 1