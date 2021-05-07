#include<iostream>
using namespace std;

class person
{
protected:
    int phone;
    char name[10];
public:
    virtual void read()
    {
        cout<<"Enter Name: "<<endl;
        cin>>name;
        cout<<"Phone Number: "<<endl;
        cin>>phone;
    }
    virtual void show()
    {
        cout<<"Name: "<<name<<endl<<"Phone Number: "<<phone<<endl;
    }
};
class student:public person
{
    int roll,marks;
public:
    void read()
    {
        cout<<"Enter Roll Number: "<<endl;
        cin>>roll;
        cout<<"Enter Marks: "<<endl;
        cin>>marks;
    }
    void show()
    {
        cout<<"Roll Number: "<<roll<<endl<<"Marks: "<<marks<<endl;
    }
};
main()
{
    person * b,b1;
    student s;
    b=&b1;
    b->read();
    b->show();
    b=&s;
    b->read();
    b->show();
}
