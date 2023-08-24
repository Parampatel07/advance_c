#include<iostream>
#include<conio.h>
using namespace std;
class person
{
    public:
    void walk()
    {
        cout<<"\nI can Walk ";
    }
    
    void talk()
    {
        cout<<"\nI can talk ";
    }
};

class student : public person
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

int main()
{   
    person p1 ;
    student s1 ;
    s1.read();
    s1.write();
    s1.walk();
    s1.talk();
    cout<<"\n-------------------------------\n";
    p1.walk();
    p1.talk();
}
