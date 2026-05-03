#include<iostream>
using namespace std;
class Electricity
{
    public:
    int unites;
    int rates;
    
    Electricity()
    {
        unites=100;
        rates=5;
    }
    void display()
    {
        cout<<"Total Electricity Bill is"<<unites*rates<<endl;
    }
    virtual void show()
    {
        cout<<"Electricity"<<endl;
    }
};
class Domistic:public Electricity
{
    public:
    void show()
    {
        cout<<"Domistic bill"<<endl;
    }
};
template<class T>
T add(T a,T b)
{
    return a+b;
}
int main()
{
    Electricity e;
    e.display();
    
    Domistic d;
    Electricity*ptr=&d;
    ptr->show();
    
    cout<<"Addition is"<<add(5,5)<<endl;
    
    return 0;
}

// ------output---------
// Total Electricity Bill is500
// Domistic bill
// Addition is10