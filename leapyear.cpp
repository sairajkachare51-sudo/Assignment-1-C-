#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter year"<<endl;
    cin>>year;
    
    if(year%4==0)
    {
        cout<<"year is a leap year";
    }
    else
    {
        cout<<"year is not a leap year";
    }



}