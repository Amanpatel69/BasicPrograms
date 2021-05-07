// Sum of given integers

#include<iostream>
using namespace std;

int main()
{
    int i, n, s = 0;
    cout<<"Enter the range: ";
    cin>>n;

    for(i = 1; i <= n; i++)
    s = s + i;

    for(i = 1; i <= n; i++)
    if(i!=n)
    cout<<i<<" + ";
    else
    cout<<i<<" = ";
    cout<<s;
    
    return 0;
}