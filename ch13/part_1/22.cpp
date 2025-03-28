#include <iostream>

using namespace std;

void mys(char s1[], char s2[]) {
    int i = 0;
    for( ; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if(s1[i] != s2[i])
            break;
    }
    cout << boolalpha <<"i=" << i << " " << (s1[i] > s2[i] ? true : false) << endl;
    for(int n = 0; ((s2[n] != '\0') && (s2[n] = s1[i + n])); n++);
    s2[i] = '\0';
}

int main() {
    char string1[] = "HappyNewYear";
    char string2[] = "Happy";
    mys(string1, string2);
    cout << string1 << endl;
    cout << string2 << endl;
    return 0;
}
/*
i=5 true
HappyNewYear
NewYe
*/