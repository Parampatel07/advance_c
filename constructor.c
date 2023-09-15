#include<iostream>
using namespace std;

class Rectangle
{
    
    private:
    int lenght , width ;
    public:
    Rectangle(int l , int w)
    {
        lenght = l ;
        width  =  w;
    }
    void print_rectangle()
    {
        cout<<"The value of lenght is "<<lenght;
        cout<<" The value of width is "<<width;
    }
    void get_area()
    {
        int area = lenght * width ;
        cout<<"\nThe value of area is "<<area;
    }
};
int main()
{
    Rectangle r1(10,20);
    r1.print_rectangle();
    r1.get_area();
}