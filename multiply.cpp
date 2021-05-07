#include<iostream>
using namespace std;

class mul
{
    int a,b;
public:
    void read()
    {
        cout<<"********* Multiplication Program *********"<<endl<<endl;
        cout<<"Enter an operand: ";
        cin>>a;
        cout<<"Enter 2nd operand: ";
        cin>>b;
    }
    void show()
    {
        cout<<"_____________________"<<endl;
        cout<<"\nMultiplication of "<<a<<" * "<<b<<" is: "<<a*b<<endl<<endl;
        cout<<"************ End of program **************"<<endl;
    }
};
int main()
{
    mul obj;
    obj.read();
    obj.show();
    return 0;
}
