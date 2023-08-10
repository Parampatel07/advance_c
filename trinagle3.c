// Write a C++ program to print following pattern.
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i = 0,number=1;
    int j = 0;
    
    for( i = 1 ; i < 5 ; i++)
    {
        for(j = 1 ; j <= i ; j++)
        {
            cout<<number<<" ";
            ++number;
        }
        cout<<endl;
    }
}
