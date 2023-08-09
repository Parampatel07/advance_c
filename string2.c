// Write a C++ program that accept a string and print string in reverse order.
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    string name  ;
    int size  = 0;
    int count = 0;
    cout<<"Enter your name ";
    cin>>name;
    
    cout<<"\nYour name is "<<name;
    
    size = name.size();
    cout<<"\nThe value of size is "<<size;
    cout<<"\n";
    for(count = size ;count >= 0 ; count--)
    {
        cout<<name[count];
    }
}
