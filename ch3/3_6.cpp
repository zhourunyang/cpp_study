#include <iostream>
#include <cstdlib>

using namespace std;

enum GameStatus {WIN, LOSE, PLAYING};

int main() {
    int sum, myPoint;
    GameStatus status;
    unsigned seed;
    int rollDice();  //函数声明
    cout << "Please enter an unsigned integer: ";
    cin >> seed;  //输入随机数种子
    srand(seed);  //将种子传递给rand()

    sum = rollDice();  //第一轮投骰子、计算和数
    switch(sum) {
        case 7:  //和为7、11则为胜
        case 11:
            status = WIN;
            break;
        case 2:  //和为2、3、12则为负
        case 3:
        case 12:
            status = LOSE;
            break;
        default:
            status = PLAYING;
            myPoint = sum;
            cout << "point is " << myPoint << endl;
            break;
    }

    while(status == PLAYING) {
        sum = rollDice();
        if(sum == myPoint)
            status = WIN;
        else if(sum == 7)
            status = LOSE;
    }

    if(status == WIN)
        cout << "player wins" << endl;
    else
        cout << "player loses" << endl;
    return 0;
}

int rollDice() {
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;
    cout << "player rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}