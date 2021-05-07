#include<iostream>
using namespace std;

class person
{
protected:
    char name[20];
    int phone;
public:
    virtual void read()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your Phone Number: ";
        cin>>phone;
    }
    virtual void show()
    {
        cout<<"Name: "<<name;
        cout<<"Phone Number: "<<phone;
    }
};
class student:public person
{
    int roll, marks;
    void read()
    {
        cout<<"Enter your Roll Number: ";
        cin>>roll;
        cout<<"Enter your Marks: ";
        cin>>marks;
    }
    void show()
    {
        cout<<"Roll Number: "<<roll;
        cout<<"Marks: "<<marks;
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
