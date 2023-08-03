// Write a Print following triangle 
// 54321
// 5432
// 543
// 54
// 5
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i = 0;
    int j = 0;
    for( j = 1 ; j < 6 ; j++)
    {
        
        for(i = 5; i >= j ; i--)
        {    
            cout<<i;
        }
        cout<<"\n";  
    }
    // cout<<"*";
    // cout<<"\n";
    // cout<<"*";
    // cout<<"*";
    // cout<<"*";
    // cout<<"\n";
    // cout<<"*";
    // cout<<"*";
    // cout<<"*";
    // cout<<"*";
}
