#include<iostream>
using namespace std;

class person
{
protected:
    int ph;
    char name[30];
    char address[30];

public:
    void read()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Phone Number: ";
        cin>>ph;
        cout<<"Enter address: ";
        cin>>address;
    }
};

class student : public person
{
    int std_id;
    char course[20];
public:
    void read()
    {
        person::read();
        cout<<"Enter student ID: ";
        cin>>std_id;
        cout<<"Enter course name: ";
        cin>>course;
    }
    void display()
    {
        cout<<"Student ID: "<<std_id<<endl<<"Name: "<<name<<endl<<"Course Name: "<<course<<endl;
    }
};

class employee : public person
{
    int emp_id;
    char desg[20];
public:
    void read()
    {
        person::read();
        cout<<"Enter the employee ID: ";
        cin>>emp_id;
        cout<<"Enter the designation: ";
        cin>>desg;
    }
    void display()
    {
        cout<<"Employee ID: "<<emp_id<<endl<<"Name: "<<name<<endl<<"Designation: "<<desg<<endl;
    }
};

main()
{
    employee e;
    student s;
    s.student::read();
    s.student::display();
    e.read();
    e.display();
}
