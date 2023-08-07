// Write a C++ program to find length of a string.(Accept string from user)
#include<iostream>
#include<conio.h>
#include <string.h>
using namespace std;
int main()
{
    string name;
    int count = 0;
    cout<<"Enter your name ";
    cin>>name;
    
    cout<<"your name is "<<name;
    
    int size = name.size();
    cout<<"\nThe value total letter is "<<size;
}
