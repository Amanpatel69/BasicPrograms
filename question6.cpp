// Write a C++ program to increment a number with static member function.

#include<iostream>
using namespace std;

class aman
{
    int a,b,c;
    public:
    void read()
    {
        cout<<"Hey, input the values to add: ";
        cin>>a;
        cout<<"Also the 2nd value to add: ";
        cin>>c;
    }
    switch(c)
    {
        case '+':
        cout<<"Addition is selected!";
        break;
        case '-':
        cout<<"Subtraction is selected!";
        break;
        default:
        cout<<"Nothing";
        break;
    }
};
int main()
{
    aman obj;
    obj.read();
    return 0;
}