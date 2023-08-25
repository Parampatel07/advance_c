#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
    int rollno ;
    int sid_number;
};
class exam
{
    public:
    int sub1;
    int sub2;
    int sub3;
};
class result : public student , public exam
{
    public :
    void get_student()
    {
        cout<<"Enter roll no ";
        cin>>rollno;
        cout<<"Enter sid number ";
        cin>>sid_number;
    }
    void get_exam()
    {
        cout<<"Enter sub1 ";
        cin>>sub1;
        cout<<"Enter sub2 ";
        cin>>sub2;
        cout<<"Enter sub3 ";
        cin>>sub3;
    }
    void get_result()
    {
        int result ;
        result = sub1 + sub2 + sub3;
        cout<<"The result total is "<<result;
    }
};
int main()
{
    result r1 ;
    r1.get_student();
    r1.get_exam();
    r1.get_result();
}

