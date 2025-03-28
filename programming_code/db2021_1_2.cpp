#include <iostream>

using namespace std;

class Mod60 {
    int value;
public:
    Mod60(int v = 0) :value(v % 60){}
    int get_value() const { return value; }
    Mod60 operator + (const Mod60 &m);
    Mod60 operator - (const Mod60 &m);
    friend ostream& operator << (ostream &out, const Mod60 &m);
};

Mod60 Mod60::operator + (const Mod60 &m) {
    int result;
    result = value + m.value;
    result %= 60;
    return Mod60(result);
}

Mod60 Mod60::operator - (const Mod60 &m) {
    int result;
    result = value - m.value;
    if(result < 0)
        result += 60;
    return Mod60(result);
}

ostream& operator << (ostream &out, const Mod60 &m) {
    out << m.get_value();
    return out;
}

int main() {
    Mod60 n1(30), n2(50), n3, n4;
    cout << n1 << " " << n2 << endl;
    n3 = n1 + n2;
    cout << n3 << endl;
    n4 = n1 + n2 + n3;
    cout << n4 << endl;
    n3 = n1 - n2;
    cout << n3 << endl;
    return 0;
}