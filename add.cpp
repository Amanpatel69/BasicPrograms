#include<iostream>

using namespace std;

int main()
{
    int t;
    cout << "Enter the limit: ";
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int a,b;
        cout << "Enter operands to add: ";
        cin >> a >> b;
        cout << a << " + " << b << " = " << a+b << endl;
    }
    return 0;
}