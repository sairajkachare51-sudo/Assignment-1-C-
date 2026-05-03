#include<iostream>
using namespace std;
class EmployeeBonus
{
    public:
    int salary;
    int bonus;
    
    EmployeeBonus()
    {
        salary=20000;
        bonus=3000;
    }
    void display()
    {
        cout<<"Total salary:"<<salary+bonus<<endl;
    }
    virtual void show()
    {
        cout<<"Employee Bonus"<<endl;
    }
};
class ManagerBonus:public EmployeeBonus
{
    public:
    void show()
    {
        cout<<"Manager salary"<<endl;
    }
};
template<class T>
T minVal(T a,T b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    EmployeeBonus E;
    E.display();
    
    ManagerBonus M;
    EmployeeBonus*ptr=&M;
    ptr->show();
    
    cout<<"Minimum value:"<<minVal(8,9)<<endl;
    
    return 0;
}

// -----output-------
// Total salary:23000
// Manager salary
// Minimum value:9 