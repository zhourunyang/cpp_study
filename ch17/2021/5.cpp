#include <iostream>

using namespace std;

#define N 101

char *nextWord(char **p) {
    static char word[80];
    while (**p == ' ')
        (*p)++;
    char *pw = word;
    while (**p && **p != ' ') {
        *pw = *(*p);
        pw++;
        (*p)++;
    }
    *pw = '\0';
    return word;
}

int main() {
    char s[] = "What's your name?", *ps = s;
    do{
        cout << nextWord(&ps) << endl;
    }while (*ps);
    return 0;
}