#include <iostream>

using namespace std; // 使用标准命名空间

class Animal{
public:
    virtual void makeSound() = 0; // 纯虚函数
};

class Lion : public Animal {
public:
    void makeSound() { 
        cout << "Roar" << endl; // 狮子的叫声
    }
};

class Elephant : public Animal {
public:
    void makeSound() {
        cout << "Trumpet" << endl; // 大象的叫声
    }
};

int main(){
    Animal *animals[2];
    animals[0] = new Lion();
    animals[1] = new Elephant();
    for (int i = 0; i < 2; ++i) {
        cout << "Animal sound: ";
        animals[i]->makeSound();
    }

    Animal *p;
    Lion lion;
    p = &lion;
    cout << "Animal sound: ";
    p->makeSound();
    Elephant elephant;
    p = &elephant;
    cout << "Animal sound: ";
    p->makeSound();
    return 0;
}