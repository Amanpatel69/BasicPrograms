// Write a C++ program to add two complex nos. using friend function.
// complex nos. expressed in the form of "a + ib"

#include<iostream>
using namespace std;

class comp
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
    friend void operator +(comp, comp);
};
void operator + (comp c1, comp c2)
{
    comp c3;
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;
    cout<<"Addition of two complex nos. are: "<<c3.a<<" + i"<<c3.b<<endl;
}
int main()
{
    comp c1, c2;
    c1.read();
    c2.read();
    operator +(c1, c2);
    return 0;
}