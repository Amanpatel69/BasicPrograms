// Hello World Programming.

#include<iostream>
using namespace std;

class aman
{
    int a,b;
    public:
    void read()
    {
        cout<<"Enter the 1st operand: ";
        cin>>a;
        cout<<"Enter the 2nd operand: ";
        cin>>b;
    }
    void display()
    {
     cout<<"Hello World!"<<endl;
     cout<<a<<" + "<<b<<" = "<<a+b;
    }

};
main()
{
    aman obj;
    obj.read();
    obj.display();
}