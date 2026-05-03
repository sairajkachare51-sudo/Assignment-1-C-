#include<iostream>
using namespace std;

class Division

{
    public:
    int num1;
    int num2;
    
    Division()
    {
       num1=20;
       num2=5;
    }
    void display()
    {
        cout<<"Division of numbers is"<<num1 / num2<<endl;
    }
    virtual void show()
    {
        cout<<"Division"<<endl;
    }
};
class Calculator:public Division
{
    public:
    void show()
    {
        cout<<"Calculator"<<endl;
    }
};
template<class T>
T divVal(T a,T b)
{
    return a / b;
}
int main()
{
    Division d;
    d.display();
    
    Calculator c;
    Division *ptr= &c;
    ptr->show();
    
    cout<<"Division  is"<< divVal(9,3)<<endl;
    return 0;
}


// --------output--------
// Division of numbers is4
// Calculator
// Division  is3