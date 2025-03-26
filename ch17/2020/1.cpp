#include <iostream>

using namespace std;

void test(int a[])
{

    cout << sizeof(a) << endl;
    cout << sizeof(a) / sizeof(a[0]) << endl;
}
int main()
{
    /* int *p = new int[10];
    for (int i = 0; i < 5; i++) {
        p[i] = i;
    }
    cout << sizeof(p) / sizeof(p[0]) << endl; */
    int arr[] = {1, 2, 3, 4, 5};
    test(arr);
    return 0;
}