#include<iostream>
using namespace std;

class number
{
    int a,b;
public:
    void input()
    {
        cout<<"\n\n\t\t\tEnter two numbers to compare: ";
        cin>>a;
        cin>>b;
    }
    void logic()
    {
        if(a>b)
            cout<<"\n\n\t\t\t"<<a<<" is greater than "<<b<<endl<<endl;
        else
            cout<<"\n\n\t\t\t"<<b<<" is greater than "<<a<<endl<<endl;
    }
};

main()
{
    number n;
    n.input();
    n.logic();
}
