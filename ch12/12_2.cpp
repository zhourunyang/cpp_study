#include <iostream>
#include <string>

using namespace std;

class MyException {
private:
    string message;
public:
    MyException(const string &message) : message(message) {}
     const string getMessage() const { return message; }

    ~MyException() {}
};

class Demo {
public:
    Demo() {
        cout << "Constuctor of Demo" << endl; 
    }

    ~Demo() {
        cout << "Destructor of Demo" << endl;
    }
};

void func() {
    Demo d;
    cout << "Throw MyException in func()" << endl;
    throw MyException("exception thrown by func()"); 
}
int main() {
    cout << "In main function" << endl;
    try {
        func();
    } catch (const MyException &e) {
        cout << "Caught an exception: " << e.getMessage() << endl;
    }
    cout << "Resume the execution of main()" << endl;
    return 0;
}