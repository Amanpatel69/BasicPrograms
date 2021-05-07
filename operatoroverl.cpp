// Operator overloading: comparison of two strings.

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class comp
{
    char *name;
    public:
    comp()
    {};
    comp(char *one)
    {name=one;}
    void operator ==(comp);
    void display();
};
void comp::display()
{
    cout<<"\n"<<name;
}
void comp::operator ==(comp c)
{
    if(strcmp(name,c.name)==0)
    cout<<"\nTwo strings are one and same";
    else
    cout<<"\nTwo strings are not same";
}
int main()
{
    char x[20],y[20];
    comp first,second,third;
    //clrscr();
    cout<<"Enter any two names: ";
    cin>>x>>y;
    first=comp(x);
    second=comp(y);
    first.display();
    second.display();
    third=first ==second;
    getch();
    return 0;
}