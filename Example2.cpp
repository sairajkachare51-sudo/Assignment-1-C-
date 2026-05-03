#include<iostream>
using namespace std;
class student
{
    public:
    int marks1;
    int marks2;
    
    student()
    {
     marks1=60;
     marks2=70;
    }
    void display()
    {
        cout<<"Total marks is:"<<marks1+marks2<<endl;
    }
    virtual void show()
    {
        cout<<"student"<<endl;
    }
};
class Result:public student
{
    public:
    void show()
    {
        cout<<"Result calculated"<<endl;
    }
};
template<class T>
T sub(T a,T b)
{
    return a-b;
}

int main()
{
    student S;
    S.display();
    
    Result r;
    student*ptr=&r;
    ptr->show();
    
    cout<<"substraction is:"<<sub(9,4)<<endl;
    return 0;
}
    
    
// ------output------
// Total marks is:130
// Result calculated
// substraction is:5

