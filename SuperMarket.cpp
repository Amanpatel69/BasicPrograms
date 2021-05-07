// Super Market

#include<iostream>
#include<string.h>
#include<iomanip>
#include<conio.h>
using namespace std;

class base
{
    int i;
    int sno, qno[10], qty[10], up[10], amt[10];
    char qname[10][20], ch;
    public:
    base()
    {
        sno = 1;
    }
    void get();
    void show();
    void display();
};
void base::get()
{
    ch = 'y';
    while(ch=='y')
    {
        cout<<"\nEnter quantity number: ";
        cin>>qno[sno];
        if(qno[sno]==1)
        strcpy(qname[sno], "provisions");
        else if(qno[sno]==2)
        strcpy(qname[sno], "grossary");
        else if(qno[sno]==3)
        strcpy(qname[sno], "crocery");
        else if(qno[sno]==4)
        strcpy(qname[sno], "eatables");
        else
        strcpy(qname[sno], "miscellaneous");
        cout<<"Enter quantity: ";
        cin>>qty[sno];
        cout<<"Enter unit price: ";
        cin>>up[sno];
        amt[sno]=up[sno]*qty[sno];
        sno++;
        cout<<"Do you want to cont..(Y/N)";
        ch=getch();
    }
}
void base::show()
{
    cout<<"\n\n";
    cout.width(10);
    cout.setf(ios::internal);
    cout<<"Sno";
    cout.width(20);
    cout.setf(ios::right);
    cout<<"Qname";
    cout.width(10);
    cout.setf(ios::internal);
    cout<<"Qty";
    cout.width(10);
    cout.setf(ios::internal);
    cout<<"Uprice";
    cout.width(10);
    cout.setf(ios::internal);
    cout<<"Amount";
    cout<<"\n";
    for(int i=1; i<70; i++)
    cout<<"-";
}
void base::display()
{
    for(int i=1; i<sno; i++)
    {
        cout<<"\n";
        cout.width(10);
        cout.setf(ios::internal);
        cout<<i;
        cout.width(20);
        cout.setf(ios::internal);
        cout<<qname[i];
        cout.width(10);
        cout.setf(ios::internal);
        cout<<qty[i];
        cout.width(10);
        cout.setf(ios::internal);
        cout<<up[i];
        cout.width(10);
        cout.setf(ios::internal);
        cout<<amt[i];
    }
}
int main()
{
    base b;
    b.get();
    b.show();
    b.display();

    return 0;
}