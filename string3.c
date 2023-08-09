// Write a C++ program that accept two strings, compare both string and display those values.
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    string name1 , name2 ;
    int answer ;
    cout<<"Enter value of string 1 ";
    cin>>name1;
    
    cout<<"Enter value of string 2 ";
    cin>>name2;
    
    answer = name1.compare(name2);
    if(answer < 0)
    {
        cout<<"Name1 is greater ";
    }
    else if(answer > 0)
    {
        cout<<"Name 2 is greater ";
    }
    else 
    {
        cout<<"Both are same ";
    }
}
