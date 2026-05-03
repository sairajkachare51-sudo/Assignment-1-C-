#include<iostream>
using namespace std;
class Hotelbill
{
    public:
    
    int days;
    int rentperday;
    
    Hotelbill()
    {
        days=2;
        rentperday=1000;
    }
    void display()
    {
        cout<<"Total Hotel Bill:"<<days*rentperday<<endl;
    }
    virtual void show()
    {
        cout<<"Hotel Bill"<<endl;
    }
    
};
class LuxuryRoom:public Hotelbill
{
    public:
    void show()
    {
        cout<<"Luxury Room"<<endl;
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
    Hotelbill h;
    h.display();
    
    LuxuryRoom l;
    Hotelbill*ptr=&l;
    ptr->show();
     
     cout<<"Maximum value:"<<maxVal(1,2)<<endl;
     
     return 0;
}

// -----output------
// Total Hotel Bill:2000
// Luxury Room
// Maximum value:2