#include <iostream>
#include <fstream>
using namespace std;
/*Write a program to read data from the file named source.txt , 
then change all the lower case letters to upper case letters and write them to the file name target.txt. 
For example, there are “Hello, world!” in file source.txt, 
you should write “HELLO, WORLD!” to the file target.txt.
*/
// 手动实现判断小写字母的函数
bool isLowercase(char ch) {
    return ch >= 'a' && ch <= 'z';
}
// 手动实现将小写字母转换为大写字母的函数
char toUppercase(char ch) {
    if (isLowercase(ch)) 
        return ch - ('a' - 'A');
    return ch;
}
int main() {
    // 打开源文件进行读取操作
    ifstream sourceFile("source.txt");
    if (!sourceFile.is_open()) {
        cerr << "无法打开源文件 source.txt" << endl;
        return 1;
    }
    // 打开目标文件进行写入操作
    ofstream targetFile("target.txt");
    if (!targetFile.is_open()) {
        cerr << "无法打开目标文件 target.txt" << endl;
        sourceFile.close();
        return 1;
    }
    char ch;
    // 逐字符读取源文件
    while (sourceFile.get(ch)) {
        ch = toUppercase(ch);
        // 将字符写入目标文件
        targetFile.put(ch);
    }
    // 关闭文件
    sourceFile.close();
    targetFile.close();
    cout << "文件处理完成，已将 source.txt 中的小写字母转换为大写并写入 target.txt。" << endl;
    return 0;
} 