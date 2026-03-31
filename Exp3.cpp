#include <iostream> 
using namespace std; 
class Employee 
{ 
 public: 
 Employee() 
 { 
 cout<<"Default Constructor Invoked"<<endl; 
 } 
}; 
int main(void) 
{ 
 Employee e1; //creating an object of Employee 
 Employee e2; 
 return 0; 
} 

//Output:
//--- Default Constructor ---
//Patient ID : 0
//Patient Name : Not Assigned
//Billing Amount : Rs. 0
//Appointment Date : Not Fixed
//--- Parameterized Constructor ---
//Patient ID : 101
//Patient Name : Rahul Patil
//Billing Amount : Rs. 3500.5
//Appointment Date : 15-02-2026
//--- Copy Constructor ---
//Patient ID : 101
//Patient Name : Rahul Patil
//Billing Amount : Rs. 3500.5
//Appointment Date : 15-02-2026