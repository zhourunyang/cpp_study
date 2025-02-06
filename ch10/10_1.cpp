#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    const int N =5;
    vector<int> s(N);  //定义一个大小为N的向量容器
    //从标准输入读入向量容器的内容
    for(auto& s1 : s)
        cin >> s1;
    //输出向量容器中每个元素的相反数
    transform(s.begin(),s.end(),ostream_iterator<int>(cout," "),negate<int>());
    cout << endl;
    return 0;

}