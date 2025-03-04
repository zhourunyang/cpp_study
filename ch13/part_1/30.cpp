#include <iostream>

using namespace std;

void invert(char *a, int x, int y) {
    char t, *p, *q;
    p = a + x;
    q = a + y;
    while(p < q) {
        t = *p;
        *p = *q;
        *q = t;
        p++;
        q--;
    }
}

int main() {
    char dt[13] = "GoodBookNice";
    int i = 0, n = 1;
    while(i < 8) {
        invert(dt, i, i + 5);
        cout << "第" << n++ << "次计算:" <<endl;
        for(int j = i; j <= i + 5; j++)
            cout << dt[j] << " ";
        cout << endl;
        i += 6;
    }    
    cout << "共执行了" << n << "次计算" << endl;
    return 0;
}