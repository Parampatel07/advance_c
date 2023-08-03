// Write a C++ program to print Fibonacci series, accept value from user
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    int first = 0;
    int second = 1;
    int answer = 0;
    int count = 0;
    cout<<"Enter value of last digit ";
    cin>>count;
    cout<<first;
    cout<<" ";
    cout<<second;
    answer = first + second; // 1
    cout<<" ";
    cout<<answer;
    for(count= count ; answer < count ; count++)
    {
        answer = second + answer; // 2
        first = answer;
        cout<<" ";
        if(answer < count)
            cout<<answer;
        answer = answer + second;//3
        second = first;
        cout<<" ";
        if(answer < count)
            cout<<answer;
    }
}
