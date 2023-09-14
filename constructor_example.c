#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int lenght ;
    int width ;
    
    public:
    Rectangle()
    {
        lenght = 10;
        width = 20 ;
        cout<<"Constructor Called...\n";
    }
    void get_area()
    {
        int area = 0;
        area = lenght * width ;
        cout<<"The value of area is "<<area;
    }
    
};

int main()
{
    Rectangle r1;
    r1.get_area();
}
