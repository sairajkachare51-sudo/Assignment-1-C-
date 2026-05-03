#include<iostream>
using namespace std;
class MaximumValue
{
    public:
    int num1;
    int num2;
    
    MaximumValue()
    {
        num1=30;
        num2=50;
    }
    void display()
    {
        cout<<"Addition is:"<<num1+num2<<endl;
    }
    virtual void show()
    {
        cout<<"Maximum  Value"<<endl;
    }
    
};
class Compare: public MaximumValue
{
    public:
    void show()
    {
        cout<<"Compare Value"<<endl;
    }
};
template<class T>
T maxVal(T a,T b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    MaximumValue m;
    m.display();
    
    Compare c;
    MaximumValue*ptr=&c;
    ptr->show();
    
    cout<<"Maximum value is:"<<maxVal(9,8)<<endl;
    return 0;
}

// --------output-------
// Addition is:80
// Compare Value
// Maximum value is:9