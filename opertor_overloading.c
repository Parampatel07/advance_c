#include<iostream>
using namespace std;
class rectangle
{
    private:
    int lenght ;
    int height ;
    
    public:
    void input()
    {
        cout<<"Enter value of lenght ";
        cin>>lenght;
        cout<<"Enter value of height ";
        cin>>height;
    }
    
    rectangle operator+(rectangle r4)
    {
        rectangle r5;
        r5.lenght = lenght + r4.lenght;
        r5.height = height + r4.height;
        return r5;
    }
    
    void output()
    {
        int area = height * lenght ;
        cout<<"\nThe value of area is "<<area;
    }
};
int main()
{
    rectangle r1,r2,r3;
    
    r1.input();
    r3 = r1.operator+(r2);
    r3.output();
}
