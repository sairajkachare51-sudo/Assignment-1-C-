#include<iostream>
using namespace std;

float area(float base,float height)
{
    return 0.5*base*height;
}

float circle(float radius)
{
    return 3,14*radius*radius;
}

int main()
{
   float h;
   float b;
   float r;

   cout<<"  Enter The Value Of Base: "<<endl;
   cin>>b;
   cout<<"  Enter The Value Of Height: "<<endl;
   cin>>h;
   cout<<"  Enter The Value Of Radius: "<<endl;
   cin>>r;


  cout<<"The Area Of Traingle Is "<< area(b,h) <<endl;
  cout<<"The Area Of circle Is "<< circle(r) <<endl;

  return 0;

}










