#include <iostream>
#include <cstring>
using namespace std;

class MyString {
	char *data;
	int sz;
public:
	MyString(const char *s = "");
	MyString(const MyString &other);
	~MyString();
	MyString operator=(const MyString &other);
	MyString operator+(const MyString &other);
	friend MyString operator+(const MyString &a, const MyString &b);
};

MyString::MyString(const char *s = "") {
	int n = strlen(s);
	sz = n;
	data = new char[n + 1];
	strcpy(data, s); 
}

MyString::MyString(const MyString &other) {
	data = new char[strlen(other.data) + 1];
	sz = other.sz;
	strcpy(data, other.data);
} 

MyString::~MyString() {
	delete[] data;
	sz = 0;
}

MyString MyString::operator=(const MyString &other) {
	
} 

MyString MyString::operator+(const MyString &other) {
	
}

MyString operator+(const MyString &a, const MyString &b) {
	MyString temp;
	temp.sz = a.sz + b.sz + 1;
	temp.data = new char[strlen(a.data) + strlen(b.data) + 1];
	
} 




int main() {
	
	return 0;
} 
