#include<iostream>
using namespace std;

int main()
{
    int t, a, b;
    cout << "Enter the range: ";

    cin >> t;


    

    for(int i = 0; i < t; i++)
    {
        cout << "Enter the numbers to add: ";
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0; 
}