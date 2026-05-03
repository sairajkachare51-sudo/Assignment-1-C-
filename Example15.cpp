#include<iostream>
using namespace std;
class Multiplication
{
    public:
    int num1;
    int num2;
    
    Multiplication()
    {
        num1=5;
        num2=4;
    }
    void display()
    {
        cout<<"Multiplication is:"<<num1*num2<<endl;
    }
    virtual void show()
    {
        cout<<"Multiplication"<<endl;
    }
    
};
class MathOperation:public Multiplication
{
    public:
    void show()
    {
        cout<<"Math Operation"<<endl;
    }
};
template<class T>
T mulVal(T a,T b)
{
    return a*b;
}

int main()
{
    Multiplication m;
    m.display();
    
    MathOperation o;
    Multiplication*ptr=&o;
    ptr->show();
    
    cout<<"Multiplication is :"<<mulVal(3,9)<<endl;
    
    return 0;
    
    
    
}

// ---------output-----
// Multiplication is:20
// Math Operation
// Multiplication is :27