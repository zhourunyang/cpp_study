#include <iostream>

using namespace std;

int fun(char *s, int *a) {
    int i = 0, label = 0;
    while(s++) {
        if(*s >= '0' && *s <= '9') {
            a[i] = a[i] * 10 + *s - '0';
            label = 1;
            continue;
        }
        if(label == 1) 
            i++;
        label = 0;
        if(!*s)
            break;
    }
    return i;
}

int main() {
    int a[10] = {0};
    char s[50] = "ab123cd4567 ab56";
    int num = fun(s, a);
    for(int i = 0; i < num; i++)
        cout << a[i] << " ";
    return 0;
}