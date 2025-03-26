#include <iostream>
using namespace std;
char *f(char *s, char ch)
{
    char *p = s, *q = s;
    int flag = 0;
    while (*q = *p++)
    {
        if (*q != ch)
            q++;
        else if (flag == 0)
        {
            flag = 1;
            q++;
        }
    }
    return s;
}
int main()
{
    char s1[] = "Hello, How are you", s2[] = "10100101 101";
    cout << f(s1, 'e') << endl;
    cout << f(s2, '0') << endl;
    return 0;
}