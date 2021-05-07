// Write a C++ program to find maximum of 3 numbers using pass by pointer method.

#include<iostream>
using namespace std;

class maximum
{
public:
    void check(int *a, int *b, int *c)
    {
        if(*a>*b && *a>*c)
            cout<<"Maximum: "<<*a;
        else if(*b>*a && *b>*c)
            cout<<"Maximum: "<<*b;
        else
            cout<<"Maximum: "<<*c;
    }
};

main()
{
    maximum m;
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    m.check(&a,&b,&c);
}
