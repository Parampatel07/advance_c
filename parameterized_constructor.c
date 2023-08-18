#include<iostream>
#include<conio.h>
using namespace std;

class cylinder
{
    int radius ;
    int height ;
    public:
    cylinder(int r,int h)
    {
        cout<<"Constructor Called..";
        radius = r;
        height = h;
    }
    void display_data()
    {
        cout<<"\nThe value of radius is "<<radius;
        cout<<"\nThe value of height is "<<height;
    }
};

int main()
{
    int r , h ;
    cout<<"Enter value of radius ";
    cin>>r;
    cout<<"Enter value of height ";
    cin>>h;
    cylinder c1(r,h);
    c1.display_data();
}
