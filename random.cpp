#include<iostream>
using namespace std;

void aman()
{
    cout<<"Hello, I'm Aman" << endl;
}

void nisha()
{
    cout<<"Hello, I'm Nisha" << endl;
}

int main()
{
    int a;
    cout << "Enter a number, < / > 100: ";
    cin >> a;
    
    if(a<100)
        aman();
    else 
    nisha();

    return 0;
}