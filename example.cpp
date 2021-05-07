#include<iostream>
using namespace std;

class sample
{
    int x,y;
public:
    void getdat(int x1, int y1=20)
    {
        x=x1;
        y=y1;
    }
    void showdata()
    {
        cout<<"X is = "<<x;
        cout<<"Y is = "<<y;
    }
};

int main()
{
    sample s;
    s.getdat();
    s.showdata();
    return 0;
}
