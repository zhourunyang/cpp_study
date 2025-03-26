#include <iostream>

using namespace std;

class Student {
public:
    Student() {
        cout << "Student +" << endl;
    }
    ~Student() {
        cout << "- Student" << endl;
    }
};

class Teacher {
    Student stu;
public:
    Teacher() {
        cout << "Teacher +" << endl;
    }
    ~Teacher() {
        cout << "- Teacher" << endl;
    }
};

int main() {
    Teacher t;
    return 0;
}