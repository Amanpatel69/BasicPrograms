// Printing three given integers in ascending order

#include<iostream>
using namespace std;

int main()
{
    int a[3], i, j;
    cout<<"Enter 3 integers: ";
    for(i = 0; i < 3; i++)
    cin>>a[i];
    cout<<"Integers entered: ";
    for(i = 0; i < 3; i++)
    cout<<a[i]<<"\t";
    cout<<"Integers in ascending order: ";
    if(a[0]>a[1] && a[0]>a[2])
    {
        if(a[1]>a[2])
        cout<<a[2]<<"\t"<<a[1]<<"\t"<<a[0];
        else
        cout<<a[1]<<"\t"<<a[2]<<"\t"<<a[0];
    }
    else if(a[1]>a[2])
    {
        if(a[0]>a[2])
        cout<<a[2]<<"\t"<<a[0]<<"\t"<<a[1];
        else
        cout<<a[0]<<"\t"<<a[2]<<"\t"<<a[1];
    }
    else
    cout<<a[0]<<"\t"<<a[1]<<"\t"<<a[2];

    return 0;
}