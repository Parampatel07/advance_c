#include<iostream>
#include<conio.h>
using namespace std;

class person
{
    public:
    
    void talk()
    {
        cout<<"\nI can talk ";
    }
    void walk()
    {
        cout<<"\nI can Walk ";
    }
};

class student
{
    public:
    
    void read()
    {
        cout<<"\nI can read ";
    }
    void write()
    {
        cout<<"\nI can write ";
    }
};

class developer : public student , public person
{
    public :
    void code()
    {
        cout<<"\nI can Code ";
    }
    void debug()
    {
        cout<<"\nI can Debug ";
    }
};


int main()
{
    developer d1;
    d1.code();
    d1.debug();
    d1.read();
    d1.write();
    d1.walk();
    d1.talk();
    
}


