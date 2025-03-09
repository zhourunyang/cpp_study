#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double values[] = {1.23, 35.26, 653.7, 4358.24};
    string names[] = {"John", "Mary", "Joe", "Jane"};
    cout << setiosflags(ios_base::scientific);
    for(int i = 0; i < 4; i++) {
        cout << setiosflags(ios_base::left) 
        << setw(6) << names[i] 
        << resetiosflags(ios_base::left) 
        << setw(10) << setprecision(1) << values[i] << endl;
    }
    return 0;
}