#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle 
{

  
    public:
    int lenght , width ;
    friend Rectangle operator+(Rectangle r1, Rectangle r2)
    {
        Rectangle answer;
        
        answer.lenght = r1.lenght + r2.lenght;
        answer.width = r1.width + r2.width;
        return (answer);
    }
};
int main()
{
    Rectangle r1,r2,r3;
    
    cout<<"Enter lenght of Rectangle 1 ";
    cin>>r1.lenght;
    cout<<"Enter width of Rectangle 1 ";
    cin>>r1.width;
    cout<<"Enter lenght of Rectangle 2 ";
    cin>>r2.lenght;
    cout<<"Enter width of Rectangle 2 ";
    cin>>r2.width;
    
    r3 = r1 + r2 ;
    
    cout<<"The value of lenght of answer Rectangle is "<<r3.lenght;
    cout<<"\nThe value of width of answer Rectangle is "<<r3.width;
}
