// Write a C++ program to swap values of two variables without using third variable.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number1 , number2 ;
    
    cout<<"Enter value of number1 ";
    cin>>number1;
    
    cout<<"Enter value of number2 ";
    cin>>number2;
    
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
    
    cout<<"The value of number1 is "<<number1;
    cout<<"\nThe value of number2 is "<<number2;
}
