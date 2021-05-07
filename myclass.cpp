#include<iostream>
using namespace std;

class myclass
{
    int a;
public:
    void getdata(int x);
    void operator -();
    void display();
};
void myclass::getdata(int x)
{
    a=x;
}
void myclass::operator-()
{
    a=-a;
}
void myclass::display()
{
    cout<<a<<endl;
}
int main()
{
    myclass obj;
    obj.getdata(10);
    obj.display();
    -obj;
    obj.display();
    return 0;
}
