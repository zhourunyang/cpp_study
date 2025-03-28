#include <iostream>
#include <string>

using namespace std;

class Reference
{
protected:
    int id;
    string title;
    string author;
    int year;

public:
    Reference(int i, string t, string a, int y) : id(i), title(t), author(a), year(y) {}
    virtual void display() = 0;
};

class Paper : public Reference
{
protected:
    int pfrom;
    int pto;

public:
    Paper(int id, string t, string a, int y, int pf, int pt) : Reference(id, t, a, y), pfrom(pf), pto(pt) {}
};

class Book : public Reference
{
protected:
    string publication;

public:
    Book(int id, string t, string a, int y, string p) : Reference(id, t, a, y), publication(p) {}
    void display();
};

void Book::display()
{
    cout << "Id: " << id << ", Title: " << title << ", Authors: " << author << ", Published by " << publication << " in " << year << endl;
}

class Journal : public Paper
{
    string journal_name;
    int volumn;
    int number;

public:
    Journal(int id, string ti, string a, int y, int f, int t, string name, int v, int n) : Paper(id, ti, a, y, f, t), journal_name(name), volumn(v), number(n) {}
    void display();
};

void Journal::display()
{
    cout << "Id: " << id << ", Title: " << title << ", Authors: " << author << ", Journal name : " << journal_name;
    cout << ", Year: " << year << ", Volumn: " << volumn << ", Number: " << number << ",PP." << pfrom << " ~" << pto << endl;
}

class Conf : public Paper
{
    string conference;

public:
    Conf(int id, string ti, string au, int y, int f, int t, string name) : Paper(id, ti, au, y, f, t), conference(name) {}
    void display();
};

void Conf::display()
{
    cout << "Id: " << id << ", Title: " << title << ", Authors: " << author << ", Conference : " << conference;
    cout << ", Year: " << year << ", PP. " << pfrom << " ~ " << pto << endl;
}

int main()
{
    Reference *rp;
    Book b(1, "C++ Programming", "ZhengLi", 2005, "Tsing Hua Pub");
    Journal j(2, "Thinking in Java", "Hou", 2002, 25, 31, "programmer", 35, 2);
    Conf c(3, "J2EE", "Wang Lei", 2007, 68, 75, "IEEE");
    rp = &b;
    rp->display();
    rp = &j;
    rp->display();
    rp = &c;
    rp->display();
    return 0;
}