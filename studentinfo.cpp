#include<iostream>
using namespace std;
class student
{
    public:
    string Name;
    string Roll_number;
    string contact_number;
    string division;

    public:
    void Getinfo()
    {
    cout<<"Enter name of student"<<endl;
    cin>>Name;
    cout<<"Enter roll number of student"<<endl;
    cin>>Roll_number;
    cout<<"Enter contact number of student"<<endl;
    cin>>contact_number;
    cout<<"Enter division of student"<<endl;
    cin>>division;
    }
    void showinfo()
    {
       
        cout<<"Name of studeny  is:"<< Name;
        cout<<"Roll number of studeny  is:"<< Roll_number;
         cout<<"contact of studeny  is:"<< contact_number;
          cout<<"Division of studeny  is:"<< division;

    }



};
int main()
{
    student object[10];
    for(int i;i=10;i++)
    {
        cout<<"Get information of student"<<i+1;
        object[i].Getinfo();
    }
    for(int i;i=10;i++)
    {
        cout<<"Get information of student"<<i+1;
        object[i].showinfo();
    }
}