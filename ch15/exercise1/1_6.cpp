#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> array;
    array.push_back(100);
    array.push_back(300);
    array.push_back(300);
    array.push_back(300);
    array.push_back(300);
    array.push_back(500);

    vector<int>::iterator itor;
    for(itor = array.begin(); itor != array.end(); itor++) {
        if(*itor == 300)
            itor = array.erase(itor);
    }
    for(itor = array.begin(); itor != array.end(); itor++)
        cout << *itor << " ";
    return 0;
}