#include <iostream>
#include <cstring>

using namespace std;

class MyString {
    char *str;
    int size;
public:
    MyString(const char *s = "");
    MyString(const MyString &s);
    ~MyString();
    MyString &operator =(const MyString &s);
    MyString operator +(const MyString &s); 
    friend MyString operator +(const MyString &s1, const MyString &s2);
    void show() { cout << str << endl; }
};

MyString::MyString(const char *s) {
    size = strlen(s);
    str = new char[size + 1];
    strcpy(str, s);
}

MyString::MyString(const MyString &s) {
    size = s.size;
    str = new char[size + 1];
    strcpy(str, s.str);
}

MyString::~MyString() {
    delete [] str;
}

MyString &MyString::operator =(const MyString &s) {
    if(this == &s)
        return *this;
    delete [] str;
    size = s.size;
    str = new char[size + 1];
    strcpy(str, s.str);
    return *this;
}

MyString MyString::operator +(const MyString &s) {
    MyString temp;
    temp.size = size + s.size;
    temp.str = new char[temp.size + 1];
    strcpy(temp.str, str);
    strcat(temp.str, s.str);
    return temp;
}

MyString operator +(const MyString &s1, const MyString &s2) {
    MyString temp;
    temp.size = s1.size + s2.size;
    temp.str = new char[temp.size + 1];
    strcpy(temp.str, s1.str);
    strcat(temp.str, s2.str);
    return temp;
}

int main() {
    MyString s1("Hello, "), s2("world!");
    s1.show();
    s2.show();
    MyString s3 = s1 + s2;
    s3.show();
    MyString s4 = s3;
    s4.show();
    return 0;

}