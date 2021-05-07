// Inline function

#include<iostream>
#include<math.h>
using namespace std;

int inline pro(int a, int b)
{
    return(a*b);
}
int inline remain(int c, int d)
{
    return(c%d);
}
int inline power(int c, int d)
{
    return(pow(c,d));
}
int main()
{
    int p,q,r,s;

    cout<<"Enter values for p and r: ";
    cin>>p>>r;

    cout<<"\nProduct of "<<p<<" and "<<r<<" : "<<pro(p,r);
    if(p>r)
    cout<<"\nRemainder of "<<p<<" divided by "<<r<<" : "<<remain(p,r);
    else
    cout<<"\nRemainder of "<<r<<" divided by "<<p<<" : "<<remain(r,p);
    cout<<"\nPower of "<<p<<" and "<<r<<" : "<<pow(p,r);
return 0;
}
