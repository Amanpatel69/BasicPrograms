// Write a C++ program to find maximum of three numbers using pass by pointer method.

#include<iostream>
using namespace std;

class maximum
{
    public:
    void logic(int *a, int *b, int *c)
    {
        if(*a>*b && *a>*c)
        {
            cout<<*a<<" is greater!";
        }
        else if(*b>*a && *b>*c)
        {
            cout<<*b<<" is greater!";
        }
        else
        {
            cout<<*c<<" is greater!"; 
        }
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter 1st digit: ";
    cin>>a;
    cout<<"Enter 2nd digit: ";
    cin>>b;
    cout<<"Enter 3rd digit: ";
    cin>>c;

    maximum obj;
    obj.logic(&a, &b, &c);

    return 0;
}