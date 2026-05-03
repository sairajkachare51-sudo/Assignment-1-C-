#include<iostream>
using namespace std;
class MinimumValue
{
    public:
    int num1;
    int num2;
    
    MinimumValue()
    {
        num1=25;
        num2=15;
    }
    void display()
    {
        cout<<"Addition of numbers :"<<num1+num2<<endl;
    }
    virtual void show()
    
    {
        cout<<"Minimum Value"<<endl;
    }
};
class CompareMin:public MinimumValue
{
    public:
    void show()
    {
        cout<<"Compare value"<<endl;
    }
};
template<class T>
T minval(T a, T b)
{
    if(a>b)
    return b;
    else
    return a;
}
int main()
{
    MinimumValue m;
    m.display();
    
    CompareMin c;
    MinimumValue*ptr=&c;
    ptr->show();
    
    cout<<"Minimum Value is :"<<minval(9,6)<<endl;
    return 0;
}

// ----------output---------
// Addition of numbers :40
// Compare value
// Minimum Value is :6

