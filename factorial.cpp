#include<iostream>
using namespace std;

int fact(int y)
{
    if(y==0)
        return 1;
    else
        return (y*fact(y-1));
}

int main()
{
    int x;
    cout<<"Enter positive integer: ";
    cin>>x;
    cout<<"\Factorial of "<<x<<" is: "<<fact(x);
    return 0;
}
