// Write a C++ program to print following Triagnle .
// prog 28
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   
    int flash = 0;
    int count = 0;
    int temp = 0 ;
    int adder = 2;
    
    for(temp = 5 ; temp > 0; temp--)
    {
        for(count = 0 ; count < temp ; count++)
        {
            cout<<" ";
        }
        for(flash = 1; flash < adder ; flash++)
        {
            cout<<flash;
            cout<<" ";     
        }
        cout<<"\n";
        adder++;
    }
    
    // for(count = 0 ; count < 5 ; count++)
    // {
    //     cout<<"_";
    // }
    // cout<<"*";
    // cout<<"_";
    // cout<<"*";
    // cout<<"\n";
    
    // for(count = 0 ; count< 3 ; count++)
    // {
    //     cout<<"_";
    // }
    // for(flash = 0 ; flash < 4 ; flash++)
    // {
    //     cout<<"*";
    //     cout<<"_";
    // } 
    // cout<<"\n";
    // for(count = 0 ; count < 2 ; count++)
    // {
    //     cout<<"_";
    // }
    // for(flash = 0 ; flash<5;flash++)
    // {
    //     cout<<"*";
    //     cout<<"_";
    // }
}
