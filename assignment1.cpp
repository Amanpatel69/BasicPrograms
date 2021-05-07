/* Assign 'Date' with data members day, month and year. Write a program to set
date and show the date with inline function.
*/

#include<iostream>
using namespace std;

class date
{
    int d,m,y;
public:
    void readDate()
    {
        cout<<"Date: "<<endl;
        cin>>d;
    }
    void logicDate()
    {
        if(d<=31)
        {
            cout<<"Valid Date!"<<endl;
        }
        else
        {
            cout<<"Invalid Date!"<<endl;
        }
    }
    void readMonth()
    {
        cout<<"Month: "<<endl;
        cin>>m;
    }
    void logicMonth()
    {
        if(m<=12 && m>0)
        {
            if(m==2)
            {
                if(d<=28)
                {
                    cout<<"Valid Month!"<<endl;
                }
                else
                    cout<<"Invalid Month! Month of Feb has date till 28"<<endl;
            }
                else if(m==4||m==6||m==9||m==11)
                {
                    if(d<=30)
                        cout<<"Valid Month!"<<endl;
                    else
                        cout<<"Invalid Month! Date should be less than or equal to 30"<<endl;
                }
            }
            else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
            {
                if(d<=31)
                    cout<<"Valid Month!"<<endl;
                else
                    cout<<"Invalid Month!"<<endl;
            }
        }
    void readYear()
    {
        cout<<"Year: "<<endl;
        cin>>y;
    }
    void logicYear()
    {
        int copy=y,count=0;
        while(copy!=0)
        {
            count++;
            copy/=10;
        }
        if(count==4)
            cout<<"Valid Year!"<<endl;
        else
            cout<<"Invalid Year!"<<endl;
    }
    inline void display()
    {
        cout<<endl<<"The date is: "<<d<<"/"<<m<<"/"<<y<<endl;
    }
};

main()
{
    cout<<"Enter the date (DD/MM/YYYY)"<<endl;
    date a;
    a.readDate();
    a.logicDate();
    a.readMonth();
    a.logicMonth();
    a.readYear();
    a.logicYear();
    a.display();
}
