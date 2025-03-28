#include <iostream>

using namespace std;

class stack {
    int *rep;
    int size, top;
public:
    stack(int n = 10) : size(n) {
        cout << "Initial Constructor" << endl;
        rep = new int[size];
        top = -1;
    }

    stack(const stack &s) :size(s.size) {
        cout << "Copy Constructor" << endl;
        rep = new int[size];
        for(int i = 0; i < size; i++)
            rep[i] = s.rep[i];
        top = s.top;
    }

    ~stack() {
        cout << "Destructor:" << endl;
        delete[] rep;
    }

    void push(int x) {
        rep[++top] = x;
    }

    int pop() {
        return rep[top--];
    }

    bool isEmpty() const {
        return top == -1;
    }
};

int main() {
    stack *ptr = new stack[2];
    for(int i = 1; i < 5; i++) {
        ptr[0].push(i);
        ptr[1].push(i + 6);
    }
    stack s2(ptr[0]);
    for(int i = 0; i < 2; i++)
        cout << s2.pop() << ',';
    cout << endl;
    s2.push(ptr[1].pop());
    ptr[0].push(ptr[1].pop());
    s2.push(ptr[1].pop());
    while(!s2.isEmpty())
        cout << s2.pop() << ',';
    cout << endl;
    delete[] ptr;
    return 0;
}
/*
Initial Constructor
Initial Constructor
Copy Constructor
4,3,
8,10,2,1,
Destructor:
Destructor:
Destructor:
*/