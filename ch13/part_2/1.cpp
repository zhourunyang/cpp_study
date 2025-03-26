#include <iostream>
#include <cstring>
using namespace std;

enum Esex {mid, man, woman};

class Person {
    int Num;
    char Name[12];
    Esex Sex;
    float Weight;
public:
    Person(int, char*, Esex, float);
    Person();
    ~Person();
    void PrintInfo();
    int Workdays();
};

Person::Person(int id, char* name, Esex s, float w)
{
    Num = id;
    strcpy(Name, name);
    Sex = s;
    Weight = w;
}

Person::Person()
{
    Num = 0;
    Name[0] = '\0';
    Sex = mid;
    Weight = 0;
}


int main()
{
    double d = 1e-6;

    char s[] = "hello";
    cout << strlen(s) << endl;
    return 0;
}

