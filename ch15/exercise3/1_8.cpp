#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "a a3bccd d";
    char *ptr = str + 1;
    while(*ptr) {
        for(int i = 0; i < ptr - str; i++) {
            if(*ptr == str[i]) {
                strcpy(ptr, ptr + 1);
                ptr--;
                break;
            }
        }
        ptr++;
    }
    cout << str << endl;
}
//a 3bcd