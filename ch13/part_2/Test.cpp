#include <iostream>
#include<cstring>
using namespace std;

class Base {
	char *name;
	int age;
public:
	Base(char *t, int n) {
        name = new char[strlen(t) + 1];
        if (name != NULL) {
            strcpy(name, t);
        }
        age = n;
    }
	
	Base(const Base& other) {
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age; 
	}
	
	~Base() {
		delete[] name;
	}
	
	bool operator <(const Base& other) {
		if(age < other.age)
			return true;
		return false;
	}
	
	Base& operator ++() {
		age++;
		return *this;
	}
	
	Base operator ++(int) {
		Base temp = *this;
		++age;
		return temp;
	}
	
    Base& operator=(const Base& other) {
        if (this != &other) {
            delete[] name;
            name = new char[strlen(other.name) + 1];
            if (name != NULL) {
                strcpy(name, other.name);
            }
            age = other.age;
        }
        return *this;
    }
	
	friend ostream& operator << (ostream& out, const Base& t);
	
}; 

ostream& operator << (ostream& out, const Base& t) {
	out << t.name << " " << t.age << endl;
	return out;		
}

int main() {
    char str[] = "John";
    Base obj1(str, 20);
    Base obj2 = obj1;
    cout << obj1;
    cout << obj2;
    Base obj3("Jack", 30);
    if(obj2 < obj3)
    	cout << "obj2 < obj3" << endl;
    return 0;
}
