#include<iostream>
using namespace std;
class Temperatur
{
    public:
    float celsius;
    
    Temperatur()
    {
        celsius=30;
    }
    void display()
    {
        cout<<"Total Temperatur"<<(celsius*9/5)+32<<endl;
    }
    virtual void show()
    {
        cout<<"Temperatue"<<endl;
    }
};
class weather:public Temperatur
{
    public:
    void show()
    {
        cout<<"Weather"<<endl;
    }
};
template<class T>
T add(T a, T b)
{
    return a+b;
}
int main()
{
    Temperatur T;
    T.display();
    
    weather W;
    Temperatur*ptr=&W;
    ptr->show();
    
    cout<<"Additiuon:"<<add(11,11)<<endl;
    
    return 0;
}

// ---output------
// Total Temperatur86
// Weather
// Additiuon:22