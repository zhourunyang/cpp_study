#include <iostream>

using namespace std;

const float PI = 3.141593;
const float FENCE_PRICE = 35;  //栅栏单价
const float CONCRETE_PRICE = 20;  //过道水泥单价

class Circle {
public:
    Circle(float r);
    float circumference();
    float area();
private:
    float radius;
};

Circle::Circle(float r):radius(r) 
{}
float Circle::circumference() {
    return 2 * PI * radius;
}
float Circle::area() {
    return PI * radius * radius;
}

int main() {
    float radius;
    cout << "Enter the radius of the pool: ";
    cin >> radius;

    Circle pool(radius);  //游泳池边界
    Circle poolRim(radius + 3);  //栅栏对象

    //计算栅栏造价
    float fenceCost = poolRim.circumference() * FENCE_PRICE;
    cout << "Fencing Cost is $" << fenceCost << endl;

    //计算过道造价
    float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
    cout << "Concrete Cost is $" << concreteCost << endl;

    return 0;
}