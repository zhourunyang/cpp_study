#include <iostream>
using namespace std;

class Obj{
    int id;
public:
    Obj(int n){ id = n; cout << "ctor " << id << endl;}
    ~Obj(){ cout << "dtor " << id << endl;}
};

void f2( )
{
    double a = 0;
    try{
        throw a; 
    }
    catch(...){ 
        cout<<"OK2!"<<endl; 
        throw; 
    }
    cout<<"end2"<<endl;
}

void f1( )
{
    try{ 
        f2( ); 
    } 
    catch(char){ 
        cout<<"OK1!"<<endl; 
    }
    cout<<"end1"<<endl;
}

int main( )
{
    Obj o(0);
    try{ 
        Obj o(1);
        f1( ); 
    }
    catch(double){ 
        cout <<"OK0!"<<endl; 
    }
    cout<<"end0"<<endl;

    return 0;
}