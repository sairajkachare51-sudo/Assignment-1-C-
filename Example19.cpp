#include<iostream>
using namespace std;
class Sum
{
    public:
    int num1;
    int num2;
    
    Sum()
    {
        num1=10;
        num2=20;
    }
    void display()
    {
        cout<<"Addition is:"<<num1+num2<<endl;
    }
    virtual void show()
    {
        cout<<"Sum"<<endl;
    }
};
class Addition:public Sum
{
    public:
    void show()
    {
        cout<<"Addition"<<endl;
    }
};
template<class T>
T add(T a,T b)
{
    return a+b;
}
int main()
{
    Sum s;
    s.display();
    
    Addition a;
    Sum*ptr=&s;
    ptr->show();
    
    cout<<"Addition is"<<add(10,200)<<endl;
    return 0;
}

// -----output-------
// Addition is:30
// Sum
// Addition is210
