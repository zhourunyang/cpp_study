#include <iostream>
#include <iomanip>
#include <string>

using namespace std;    

int main() {
    double values[] = {1.23, 35.26, 653.7, 4358.24};
    string names[] = {"John", "Mary", "Joe", "Jane"};
    for(int i = 0; i < 4; i++) {
        cout << setw(6) << names[i] << setw(10) << values[i] << endl;
    }
    return 0;
}