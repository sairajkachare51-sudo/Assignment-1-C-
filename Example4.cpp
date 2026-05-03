#include<iostream>
using namespace std;

class Recharge
{
public:
    long long number;
    int amount;
    
    Recharge()
    {
        number = 7020298858;
        amount = 199;
    }

    void display()
    {
        cout << "Recharge number: " << number << endl;
        cout << "Recharge Amount: " << amount << endl;
    }

    virtual void show()
    {
        cout << "Recharge" << endl;
    }
};

class SpecialRecharge : public Recharge
{
public:
    void show()
    {
        cout << "Special recharge" << endl;
    }
};

template<class T>
T divide(T a, T b)
{
    if (b == 0)
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main()
{
    Recharge r;
    r.display();
    
    SpecialRecharge s;
    Recharge *ptr = &s;
    ptr->show();   // runtime polymorphism
    
    cout << "Division is: " << divide(9, 3) << endl;

    return 0;
}

// -------output------
// Recharge number: 7020298858
// Recharge Amount: 199
// Special recharge
// Division is: 3