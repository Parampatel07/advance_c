// Write a C++ program to input any four digits number and display its sum.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number = 0;
    int first = 0;
    int second = 0 ; 
    int third = 0 ;
    int fourth = 0;
    int answer = 0;
    cout<<"Enter value of number ";
    cin>>number;
    
    first = number / 1000;
    second = (number / 100) % 10;
    third = (number / 10) % 10 ;
    fourth = number % 10;
    answer = first + second + third + fourth ;
    // cout<<"the value of first "<<first;
    cout<<"The value of answer  is "<<answer;
}
