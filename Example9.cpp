#include<iostream>
using namespace std;
class BankInterest
{
    public:
    int principal;
    int rate;
    
   BankInterest()
   {
       principal=1000;
       rate=5;
   }
   void display()
   {
       cout<<"Total Amount"<<principal*rate/100<<endl;
   }
   virtual void show()
   {
       cout<<"Interest"<<endl;
   }
};
class Loan:public BankInterest
{
    public:
    void show()
    {
        cout<<"Loan Interest"<<endl;
    }
};
template<class T>
T mul(T a,T b)
{
    return a*b;
}
int main()
{
    BankInterest B;
    B.display();
    
    Loan L;
    BankInterest*ptr=&L;
    ptr->show();
    
    cout<<"Multiplication:"<<mul(9,9)<<endl;
    
    return 0;
}

// -------output------
// Total Amount50
// Loan Interest
// Multiplication:81