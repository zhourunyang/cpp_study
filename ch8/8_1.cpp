#include <iostream>

using namespace std;

class Complex {
public:
    Complex(double r = 0, double i = 0) :real(r), imag(i) {}
    Complex operator + (const Complex &c2) const;
    Complex operator - (const Complex &c2) const;
    void display() const; 
    friend ostream &operator << (ostream &out, const Complex &c);
private:
    double real,imag;
};

Complex Complex::operator + (const Complex &c2) const {
    return Complex(real + c2.real, imag + c2.imag);
}

Complex Complex::operator - (const Complex &c2) const {
    return Complex(real - c2.real, imag - c2.imag);
}

void Complex::display() const {
    cout << real << " + " << imag << "i" << endl;
}

ostream& operator << (ostream &out, const Complex &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}
int main() {
    Complex c1(5, 4), c2(2, 10), c3;
    cout << "c1=" << c1 << endl;
    //c1.display();
    cout << "c2=" << c2 << endl;
    //c2.display();
    c3 = c1 - c2;
    cout << "c3=" << c3 << endl;
    //c3.display();
    c3 = c1 + c2;
    cout << "c3=" << c3 << endl;
    //c3.display();

    return 0;
}
