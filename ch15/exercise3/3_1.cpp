#include <iostream>

using namespace std;

class Worker {
protected:
    const char *name;
    double salaryPerHour;  //时薪
    double bonus;  //奖金
    double penalty;  //罚金
    double salary;  //月薪
public:
    virtual void computeSalary() = 0;

    Worker(const char *_name, double _salaryPerHour, double _bonus, double _penalty) :
    name(_name), salaryPerHour(_salaryPerHour), bonus(_bonus), penalty(_penalty) {}
};

//计时工
class HourlyWorker : public Worker {
	int hours;  //月工时
public:
    HourlyWorker(const char *_name, double _salaryPerHour, double _bonus, double _penalty, int _hours) :
    Worker(_name, _salaryPerHour, _bonus, _penalty), hours(_hours) {}

    void computeSalary() {
        if(hours <= 160) {
            salary = salaryPerHour * hours + bonus - penalty;
            cout << salary << endl;
        }else{
            salary = salaryPerHour * 160 + 1.5 * 160 * (hours - 160) + bonus - penalty;
            cout << name << " : "<< salary << endl;
        }
    }
};

//计薪工
class SalariedWorker : public Worker {
public:
    SalariedWorker(const char *_name, double _salaryPerHour, double _bonus, double _penalty) : 
    Worker(_name, _salaryPerHour, _bonus, _penalty) {}

    void computeSalary() {
        salary = salaryPerHour * 160 + bonus - penalty;
        cout << name << " : "<< salary << endl;
    }
};

int main() {
    Worker *p;
    HourlyWorker h("Wang", 30.0, 1000.0, 0, 170);
    SalariedWorker s("Zhang", 35.0, 500.0, 200.0);
    p = &h;
    p -> computeSalary();
    p = &s;
    p -> computeSalary();

    return 0;
}