#include <iostream>

using namespace std;

class Set {
    int *p;
    int size;
public:
    Set();
    Set(const Set &s);
    ~Set();
    void add(int i);
    int getSize() { return size; }
};

Set::Set() {
    p = NULL;
    size = 0;
}

Set::Set(const Set &s) {
    if (s.size == 0) {
        p = NULL;
        size = 0;
    }else{
        size = s.size;
        p = new int[size];
        for (int i = 0; i < size; i++)
        {
            p[i] = s.p[i];
        }
    }
}

void Set::add(int i) {
    int flag = 0;
    if (size == 0) {
        p = new int[1];
        p[0] = i;
        size = 1;
    }else{
        for (int j = 0; j < size; j++) {
            if (p[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            int *p1 = new int[size];
            for (int j = 0; j < size; j++) {
                p1[j] = p[j];
            }
            p1[size] = i;
            size++;
            delete[] p;
            p = p1;
        }
    }
}
Set::~Set() {
    if (size != 0) {
        delete[] p;
        size = 0;
    }
}
int main() {
    Set s1;
    s1.add(1);
    s1.add(1);
    s1.add(3);
    Set s2 = s1;
    cout << "the size of s1:" << s1.getSize() << endl;
    cout << "the size of s2:" << s2.getSize() << endl;
    return 0;
}