#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int x;
    float y;
    cout<<"Enter amount and balance: ";
    cin>>x>>y;

    if(x%5==0 && y>=(x+0.50))
    {
        y-=(x+0.50);
        cout<<"Your account balance is: "<<fixed<<setprecision(2)<<y;
    }
    else
    {
        cout<<"Insufficient accouont balance!!\nYour account balance is: "<<fixed<<setprecision(2)<<y;
    }
    return 0;
}