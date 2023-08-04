// Write a C++ program to accept and arrange 10 numbers in ascending and deciding order using array.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int numbers[5];
   int count = 0 ;
   int temp = 0;
   int flash = 0;
    for(count = 0 ; count < 5 ; count++)
    {
       cout<<"Enter value of number "<<count+1<<"  ";
       cin>>numbers[count];
    }
    
    for(count = 0 ; count < 5 ;count++)
    {
        cout<<"\nThe value of number "<<count+1<<" is "<<numbers[count];        
    }
 
    for(flash = 0 ; flash < 5 ; flash++)
    {
        for(count= flash+1 ; count < 5;count++)
        {
            if(numbers[flash] < numbers[count])
            {
                temp = numbers[flash];
                numbers[flash] = numbers[count];
                numbers[count] = temp;
            }
        }
    }
    
    cout<<"\n \n \n";
    for(count = 0 ; count < 5 ;count++)
    {
        cout<<"\nThe value of number "<<count+1<<" is "<<numbers[count];        
    }
    
    
}
