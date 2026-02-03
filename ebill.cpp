#include<iostream>
using namespace std;
class electricitybill
{
    public:
    int unit;
    int bill;
    int  discount;
    int finnal;

    public:
    void Bill()
    {
        cout<<"enter total units"<<endl;
        cin>>unit;

    }
    void calculation()
    {
        bill=12*unit;
        discount=bill*0.02;
        finnal=bill-discount;
    }
    void print()
    {
        
        cout<<"total bill"<<finnal;
        
    }
};
int main()
{
    electricitybill eb;
   
    eb.Bill();
    eb.calculation();
    eb.print();
    return 0;
   
}