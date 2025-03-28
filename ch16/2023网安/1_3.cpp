#include <iostream>

using namespace std;

class Test{
public:
	Test(){
		num++;
	}
	~Test(){num--;}
	static void print(){
		cout << "T count: " << num << endl;
	}
private:
	static int num;
};
int Test::num = 0;

void fun(Test *p){
	Test m3;
	p = new Test[5];
	p->print();
	delete[] p;
	p = nullptr;
}

Test t1;
int main(){
	t1.print();
	Test t2;
	Test *ptr = nullptr;
	ptr->print();
	fun(ptr);
	ptr = new Test;
	ptr->print();
	delete ptr;
	Test::print();
	return 0;
}
/*
T count: 1
T count: 2
T count: 8
T count: 3
T count: 2
*/