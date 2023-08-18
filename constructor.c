#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
    int lenght ;
    int width ;
    
    public:
    rectangle()
    {
        cout<<"constructor called...";
        lenght = 0 ;
        width = 0 ;
    }
};


int main()
{
    rectangle r1;
}
