#include <iostream>

using namespace std;

//值传递
void swap(int a,int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 5, y = 10;
    cout << "x = " << x << " y = " << y << endl;
    swap(x,y);
    cout << "x = " << x << " y = " << y << endl;
    return 0;
}