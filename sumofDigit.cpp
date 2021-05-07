#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++)
    {
        int a, b, sum=0;
        cin>>a;
        while(a>0)
        {
            b=a%10;
            sum+=b;
            a=a/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}