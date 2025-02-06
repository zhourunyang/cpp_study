#include <iostream>

using namespace std;

bool symm(unsigned n)
{
    unsigned i = n;
    unsigned m = 0;
    while(i > 0)
    {
        m = m * 10 + i % 10;
        i /= 10;
    }
    return m == n;
}

int main()
{
    for(unsigned i = 11; i < 1000; i ++)
    {
        if(symm(i) && symm(i * i) && symm(i * i * i))
        {
            cout << "i=" << i;
            cout << " i *i=" << i * i;
            cout << " i * i * i=" << i * i * i << endl;
        }
    }
    return 0;
}