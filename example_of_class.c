#include<iostream>
using namespace std;
class circle
{
    private:
    float pi = 3.141592 ;
    int radius = 0;
    
    public:
    void get_radius()
    {
        cout<<"Enter value of radius";
        cin>>radius;
    }
    void get_area()
    {
        int area = pi * (radius * radius);
        cout<<"the value of area is "<<area;
    }
};


int main()
{
    circle c1;
    c1.get_radius();
    c1.get_area();
}
