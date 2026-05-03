#include<iostream>
using namespace std;
class ExameMarks
{
    public:
    int marks1;
    int marks2;
    
    ExameMarks()
    {
        marks1=70;
        marks2=80;
    }
    void display()
    {
        cout<<"Total marks:"<<marks1+marks2<<endl;
    }
    virtual void show()
    {
        cout<<"Marks"<<endl;
    }
    
};
class FinalMarks:public ExameMarks
{
    public:
    void shoe()
    {
        cout<<"Final marks"<<endl;
    }
    
};
template<class T>
T add(T a,T b)
{
    return a+b;
}
int main()
{
    ExameMarks e;
    e.display();
    
    FinalMarks f;
    ExameMarks*ptr=&f;
    ptr->show();
    
    cout<<"Addition is:"<<add(100,800)<<endl;
    
    return 0;
}

// -------output------
// Total marks:150
// Marks
// Addition is:900