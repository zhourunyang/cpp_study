#include <iostream>

using namespace std;

class Array {
    int *list;
    int last;
    int maxsize;
public:
    Array(int n = 20) {
        maxsize = n;
        list = new int[n];
        last = -1;
    }

    ~Array() {
        delete[] list;
    }

    void print() {
        if(last == -1) 
            cout << "empty list" << endl;
        else {
            for(int i = 0; i <= last; i++)
                cout << list[i] << " ";
            cout << endl;
        }
    }

    void set(int i, int key) {
        if(i < 0 || i > last) 
            cout << "illegal subscript!" << endl;
        else 
            list[i] = key;
    }

    void insert(int key) {
        if(last == -1) {
            last++;
            list[last] = key;
        }else if(last == maxsize - 1) {
            cout << "list full" << endl;
        }else {
            int i;
            for(i = last; i >= 0 && list[i] > key; i--)
                list[i + 1] = list[i];
            list[i] = key;
            last++;
        }
    }
};

int main() {
    Array a(10);
    int m;
    for(int i = 0; i < 10; i++) {
        cin >> m;
        a.insert(m);
    }
    a.print();
    a.set(3, 0);
    a.print();
    cin >> m;
    a.insert(m);
    a.print();

    return 0;
}