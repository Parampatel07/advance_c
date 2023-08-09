// Write a C++ program to input any four digits number and display its sum.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number ; 
    int first , second , third , fourth ;
    int answer ;
    cout<<"Enter value of number ";
    cin>>number;
    
    if(number > 999 && number < 10000)
    {
        first = number / 1000 ; 
        second = number / 100 % 10;
        third = number / 10 % 10;
        fourth = number % 10;
        answer = first + second + third + fourth;
        cout<<"Answer is "<<answer;            
    }
    else
    {
        cout<<"Enter 4 digit number ";
    }
    
    
}
