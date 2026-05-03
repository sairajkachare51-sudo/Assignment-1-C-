#include<iostream>
using namespace std;
class LibraryFine
{
    public:
    int daylate;
    int fineperday;
    LibraryFine()
    {
        daylate=5;
        fineperday=2;
    }
    void display()
    {
        cout<<"Total Fine;"<<daylate*fineperday<<endl;
    }
    virtual void show()
    {
        cout<<"Fine"<<endl;
    }
    
};
class studentFine:public LibraryFine
{
    public:
    void show()
    {
        cout<<"student fine"<<endl;
    }
};
template<class T>
T maxVal(T a, T b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    LibraryFine L;
    L.display();
    studentFine S;
    LibraryFine*ptr=&S;
    ptr->show();
    
    cout<<"Max value"<<maxVal(9,0)<<endl;
    return 0;
}

// ----output------
// Total Fine;10
// student fine
// Max value9