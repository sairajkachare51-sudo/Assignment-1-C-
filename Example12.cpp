#include<iostream>
using namespace std;

class Petrol

{
    public:
    int liter;
    int price;
    
    Petrol()
    {
        liter=5;
        price=100;
    }
    void display()
    {
        cout<<"Total amount"<<liter*price<<endl;
    }
    virtual void show()
    {
        cout<<"Fuel"<<endl;
    }
};
class Disel:public Petrol
{
    public:
    void show()
    {
        cout<<"Disel Fuel"<<endl;
    }
};
template<class T>
T minVal(T a,T b)
{
    if(a<b)
     return a;
    
    else
    return b;
}
int main()
{
    Petrol p;
    p.display();
    
    Disel d;
    Petrol *ptr= &d;
    ptr->show();
    
    cout<<"minimum number is"<< minVal(9,6)<<endl;
    return 0;
}

// -----output-------
// Total amount500
// Disel Fuel
// minimum number is6