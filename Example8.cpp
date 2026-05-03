#include<iostream>
using namespace std;
class TicketBooking
{
    public:
    int tickets;
    int price;
    
    TicketBooking()
    {
        tickets=2;
        price=100;
    }
    void display()
    {
        cout<<"Total Amount:"<<tickets*price<<endl;
    }
    virtual void show()
    {
        cout<<"Ticket Booking"<<endl;
    }
};
class OnlineBooking:public TicketBooking
{
    public:
    void show()
    {
        cout<<"Online Booking"<<endl;
    }
};
template<class T>
T sub(T a,T b)
{
 return a-b;   
}
int main()
{
    TicketBooking T;
    T.display();
    
    OnlineBooking O;
    TicketBooking*ptr=&O;
    ptr->show();
    
    cout<<"Substraction is:"<<sub(9,9)<<endl;
    
    return 0;
}

// ------output-------
// Total Amount:200
// Online Booking
// Substraction is:0