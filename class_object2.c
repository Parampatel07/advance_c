#include<iostream>
#include<conio.h>
using namespace std; 
class person
{
    private:
    int age;
    string name;
    float weight;
    public:
    void walk()
    {
        cout<<"\nI can walk ";
    }
    void talk()
    {
        cout<<"\nI can talk ";
    }
    void get_data(int age,string name,float weight)
    {
        cout<<"\nName = "<<name;
        cout<<"\nAge = "<<age;
        cout<<"\nWeight = "<<weight;
    }
};
int main()
{
    person p1 ;
    p1.walk();
    p1.talk();
    p1.get_data(19,"Param ",45.45);
}
