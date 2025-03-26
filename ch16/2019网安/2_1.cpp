#include <iostream>
#include <cstring>

using namespace std;

int func(char *str) {
    int d, num, len;
    while(*str != '\0') {
        d = *str - '0';
        len = strlen(str) - 1;
        for(int i = 0; i < len  ; i++) {
            d *= 10;
        }
        num += d;
        len--;
        str++;
    }
    return num;
}