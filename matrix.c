#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int matrix1[2][2];
    int matrix2[2][2];
    int count = 0 ;
    int flash = 0 ;
    int answer[2][2];
    
    cout<<"Enter value for matrix1 "<<endl;
    for(flash = 0 ; flash < 2 ; flash++)
    {
        for(count = 0 ; count< 2 ;count++)
        {
            cout<<"Enter "<<count+1<<" value ";
            cin>>matrix1[flash][count];     
        }
    }
    
    cout<<"Enter value of matrix2 "<<endl;
    for(flash = 0 ; flash < 2 ; flash++)
    {
        for(count = 0 ; count < 2 ; count++)
        {
            cout<<"Enter "<<count+1<<" value ";
            cin>>matrix2[flash][count];
        }
    }
    
    for(flash = 0 ; flash < 2 ; flash++)
    {
        for(count = 0 ; count < 2 ; count++)
        {
            answer[flash][count] = matrix1[flash][count] * matrix2[flash][count];
        }
    }
    cout<<"Answer matrix is "<<endl;
    for(flash = 0 ; flash < 2 ; flash++)
    {
        for(count = 0 ; count < 2 ; count++)
        {
            cout<<"\nThe value of answer "<<count+1<<" is "<<answer[flash][count];
            
        }
    }
    
}
