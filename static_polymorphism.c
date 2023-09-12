#include<iostream>
using namespace std;
class rectangle 
{
    public:
    void input()
    {
        int length = 10 ;
        int width = 15 ;
    }
    void input(int l , int w)
    {
        int length = l ;
        int width = w ;
    }
    void output(int length , int width)
    {
        int area = 0 ;
        area = length * width ;
        cout<<"\nThe value of area "<<area;
    }
};
int main()
{
    rectangle r1 , r2 ;
    
    r1.input();
    r1.output(10,10);
    r2.input(10,20);
    r2.output(10,20);
}
