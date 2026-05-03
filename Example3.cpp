#include<iostream>
using namespace std;

class shopping
{
public:
    int price;
    int quantity;
    
    shopping()
    {
        price = 100;
        quantity = 3;
    }

    void display()
    {
        cout << "Total cost is:" << price * quantity << endl;
    }

    virtual void show()
    {
        cout << "shopping" << endl;
    }
};

class OnlineShopping : public shopping
{
public:
    void show()
    {
        cout << "Online shopping" << endl;
    }
};

template<class T>
T mul(T a, T b)
{
    return a * b;
}

int main()
{
    shopping S;
    S.display();

    OnlineShopping O;
    shopping* ptr = &O;
    ptr->show();   // runtime polymorphism

    cout << "Multiplication is:" << mul(9, 4) << endl;

    return 0;
}

// ------output------
// Total cost is:300
// Online shopping
// Multiplication is:36