#include <iostream>

using namespace std;

//将from针上的最上面的盘子移动到to针上
void move(char from, char to) {
    cout << from << "->" << to << endl;
}

//将n个盘子从a针上移动到c针上(以b针为跳转)
void hanoi(int n, char a, char c, char b) {
    if(n == 1)
        move(a, c);
    else {
        hanoi(n - 1, a, b, c);
        move(a, c);
        hanoi(n - 1, b, c, a);
    }
}

int main() {
    int m;
    cout << "Enter the number of diskes: ";
    cin >> m;
    cout << "The steps to moving " << m << " diskes:" << endl;
    hanoi(m, 'A', 'C', 'B');
    return 0;
}