// Write a C++ program to add three times (hh:mm:ss) using passing object by value method.

#include<iostream>
using namespace std;

class time
{
    int h,m,s;
    public:
    void read()
    {
        cout<<"Enter time in Hour: ";
        cin>>h;
        cout<<"Enter time in Minute: ";
        cin>>m;
        cout<<"Enter time in Seconds: ";
        cin>>s;
    }
    void display(time t1, time t2, time t3)
    {
        time t4;
        t4.h = t1.h + t2.h + t3.h;
        t4.m = t1.m + t2.m + t3.m;
        t4.s = t1.s + t2.s + t3.s;

        if(t4.s>=60)
        {
            t4.s = t4.s - 60;
            t4.m = t4.m + 1;
        }
        if(t4.m>=60)
        {
            t4.m = t4.m - 60;
            t4.h = t4.h+1;
        }
        cout<<t4.h<<"h : "<<t4.m<<"m : "<<t4.s<<"s"<<endl;

    }
};
main()
{
    time t1, t2, t3, t4;
    t1.read();
    cout<<endl;
    t2.read();
    cout<<endl;
    t3.read();
    cout<<endl;
    t4.display(t1, t2, t3);
}