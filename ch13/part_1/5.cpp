#include <iostream>

using namespace std;

class stack {
    int *rep;
    int size, top;
public:
    stack(int n = 10) : size(n) {
        cout << "Initial Constructor" << endl;
        rep = new int[size];
        top = 0;
    }

    stack(const stack &s) :size(s.size) {
        cout << "Copy Constructor" << endl;
        rep = new int[size];
        for(int i = 0; i < size; i++)
            rep[i] = s.rep[i];
        top = s.top;
    }

    ~stack() {
        cout << "Destructor:" << top << endl;
        delete[] rep;
    }

    void push(int x) {
        rep[top++] = x;
    }

    int pop() {
        return rep[--top];
    }

    bool isEmpty() const {
        return top == 0;
    }
};

int main() {
    stack s1;
    for(int i = 1; i < 5; i++)
        s1.push(i);
    stack s2(s1);
    for(int i = 1; i < 3; i++)
        cout << s2.pop() << ',';
    cout << endl;
    s2.push(6);
    s1.push(7);
    while(!s1.isEmpty()) 
        cout << s1.pop() << ',';
    cout << endl;

    return 0;
}
