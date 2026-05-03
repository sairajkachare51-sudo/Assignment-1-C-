#include<iostream>
using namespace std;
class Distance
{
    public:
    int d1;
    int d2;
    
    Distance()
    {
        d1=10;
        d2=20;
    }
    void display()
    {
        cout<<"Total distance:"<<d1+d2<<endl;
    }
    virtual void show()
    {
        cout<<"Distance"<<endl;
    }
};
class Travel:public Distance
{
    public:
    void show()
    {
        cout<<"Travel Distance"<<endl;
    }
};
template<class T>
T divVal(T a,T b)
{
    return a/b;
}
int main()
{
    Distance D;
    D.display();
    
    Travel T;
    Distance*ptr=&T;
    ptr->show();
    
    cout<<"Division is"<<divVal(3,3)<<endl;
    
    return 0;
}
    
// -------output----------
// Total distance:30
// Travel Distance
// Division is1


