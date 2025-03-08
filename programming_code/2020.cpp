#include <iostream>
#include <cstring>

using namespace std;

class STR {
    char *s;
    int m, n;
public:
    STR(const char *t);  // 修改为接受 const char*
    void fun();
    void print();
    ~STR();
};

STR::STR(const char *t) {  // 修改为接受 const char*
    int len = strlen(t) + 1;
    s = new char[len];
    strcpy(s, t);
    m = n = 0;
}

STR::~STR() {
    delete[] s;
}

void STR::fun() {  
    const char *temp = s;  // 使用临时指针遍历字符串
    while(*temp != '\0') {
        if(*temp == ' ')
            m++;
        if(*temp == '.') {
            n++;
            m++;
        }
        temp++;  // 移动临时指针
    }
}

void STR::print() {  
    cout << "字符串: " << s << endl;
    cout << "句子数: " << n << endl;
    cout << "单词数: " << m << endl;  // 单词数应加1，因为最后一个单词后没有空格
}

int main() {
    STR s("I am a student.I am twenty.I come from China.");
    s.fun();
    s.print();  
    return 0;
}