#include<iostream>
using namespace std;
class ShoppingCart
{
    public:
    int itemcount;
    int price;
    
     ShoppingCart()
     {
         itemcount=3;
         price=200;
     }
     void display()
     {
         cout<<"Total cost:"<<endl;
     }
     virtual void show()
     {
         cout<<"Cart"<<endl;
     }
};
class OnlineCart:public  ShoppingCart
{
    public:
    void show()
    {
        cout<<"online cart"<<endl;
    }
};
template<class T>
T sub(T a,T b)
{
    return a-b;
}
int main()
{
     ShoppingCart s;
     s.display();
     
     OnlineCart c;
      ShoppingCart*ptr=&c;
      ptr->show();
      
      cout<<"Substraction is "<<sub(9,99)<<endl;
      
      return 0;
}

// -----output----------
// Total cost:
// Cart
// Substraction is -90
