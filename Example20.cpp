#include<iostream>
using namespace std;
class Difference
{
    public:
    int num1;
    int num2;
    
    Difference()
    {
        num1=30;
        num2=10;
    }
    void display()
    {
        cout<<"Difference is "<<num1-num2<<endl;
    }
    virtual void show()
    {
        cout<<"Difference"<<endl;
    }
    
};
class Substraction:public Difference
{
    public:
    void show()
    {
        cout<<"Difference"<<endl;
    }
};
template<class T>
T sub(T a,T b)
{
    return a-b;
}
int main()
{
    Difference d;
    d.display();
    
    Substraction s;
    Difference *ptr=&s;
    ptr->show();
    
    cout<<"substraction is "<<sub(9,0)<<endl;
    return 0;
}

// ---------output------
// Difference is 20
// Difference
// substraction is 9