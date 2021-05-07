// Odd and Even Integers

#include<iostream>
using namespace std;

int main()
{
    int a[20], i, es, os, en, on;
    for(i = 0; i < 20; i++)
    {
        cout<<"Enter integer: "<<i+1<<" : ";
        cin>>a[i];
    }
    es = en = os = on = 0;
    cout<<"Entered integers: ";
    for(i = 0; i < 20; i++)
    {
        cout<<a[i]<<"\t";
        if(a[i] % 2 == 0)
        {
            en++; es = es + a[i];
        }
        else
        {
            on++; os = os + a[i];
        }
    }
    cout<<"\nEven integers: "<<en;
    cout<<"\nSum of even integers: "<<es;
    cout<<"\nOdd integers: "<<on;
    cout<<"\nSum of odd integers: "<<os;
}