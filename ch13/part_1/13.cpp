#include <iostream>
#include <cstring>

using namespace std;

class Person {
    char name[10];
    int age;
public:
    void init1(char *str, int k) {
        strcpy(name, str);
        age = k;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
    int num;
    double avg;
public:
    void init2(int i, double f) {
        num = i;
        avg = f;
    }

    void display() {
        cout << "Num: " << num << endl;
        cout << "Avg: " << avg << endl;
    }
};

int main() {
    Person A, *p;
    Student B;
    A.init1("王明", 19);
    p = &A;
    p->display();
    B.init2(20090332, 97.5);
    p = &B;
    p->display();

    return 0;
}
/*
Name: 鐜嬫槑
Age: 19
Num: 20090332
Avg: 97.5
 */