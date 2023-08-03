// Write a C++ program that display a menu with options area of triangle, square and rectangle.
// area of triangle = height * base / 2 
// area of sqaure = height * height 
// area of rectangle = height * lenght 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int option ;
    int answer;
    
    do
    {
        cout<<"\nEnter 1 for triangle \n";
        cout<<"Enter 2 for square \n";
        cout<<"Enter 3 for rectangle \n";
        cout<<"Enter 0 for exit \n";
        cout<<"Select Any one options";
        cin>>option;
        
        if(option == 1)
        {
            int height , base ;
            cout<<"Enter value of height ";
            cin>>height;
            cout<<"Enter value of base ";
            cin>>base;
            answer = height * base / 2 ;
            cout<<"\nThe value of area of triangle is "<<answer;
        }
        else if(option == 2)
        {
            int lenght;
            cout<<"Enter value of lenght ";
            cin>>lenght;
            answer = lenght * lenght;
            cout<<"\nThe value of area of square is "<<answer;
        }
        else if(option == 3)
        {
            int height , lenght;
            cout<<"Enter value of height ";
            cin>>height;
            cout<<"Enter value of lenght ";
            cin>>lenght;
            answer = height * lenght;
            cout<<"\nThe value of area of rectangle is "<<answer;
        }
        else if(option == 0)
        {
            break;
        }
        else    
        {
            cout<<"Invalid option";
        }
    }while(option!=0);
}
