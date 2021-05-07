#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    while(n>0)
    {
    for(int i = 0; i<n; i++)
    {
       int reverse = n%10;
       sum = sum*10+reverse; 
       n = n / 10;
    }
    }

    cout << sum << endl;

    return 0;
}